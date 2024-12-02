/*
Expt 3 - Task 1
Module2: ContolStructure Switch
Aim: WAP to design a menu driven calculator using switch statement.
Name     : MOHD SIBTAIN RAZA KHAN
Roll No  : 40
UIN      : 241A048
Division : A */
#include<stdio.h>
int main(){
 float num1,num2,result;
int mod_result;
char operator;

printf("\t\t\t *** calculataor ***\n\n");
printf("\t Operations : \n");
printf("\t\t + : addition\n");
printf("\t\t - : Subtraction\n");
printf("\t\t * : Multiplication\n");
printf("\t\t / : Division\n");
printf("\t\t %% : Modulus\n\n");

repeat:
    printf("Enter First Operand:");
    scanf("%f",&num1);
    printf("Enter Second Operand:");
    scanf("%f",&num2);
    printf("Enter Operation:");
    scanf(" %c", &operator);

switch(operator)
{
case '+':
    result= num1+num2;
    printf("%.1f+%.1f=%.1f", num1,num2,result);
    break;
    case '-':
    result= num1-num2;
    printf("%.1f-%.1f=%.1f", num1,num2,result);
    break;
    case '*':
    result= num1*num2;
    printf("%.1f*%.1f=%.1f", num1,num2,result);
    break;
    case '/':
    if(num2==0){
    printf("Cannot Divide By zero");
    break;
    }
    result=num1/num2;
    printf("%.1f/%.1f=%.1f",num1,num2,result);
    break;

    case '%':
        mod_result= (int)num1% (int)num2;
        printf("%.0f%%%.0f = %d",num1,num2,mod_result);
        break;

    default:
        printf("Invalid Operator. Try Again");
        break;

}
 printf("\n Continue ?(Y/N):");
 scanf("%c",&operator);
 if(operator=='N'||operator=='n'){
    printf("Thank You For Using Supreme's Calculator");
    return 0;
 }
 printf("\n\n");

 goto repeat;
 return 0;
 }

























