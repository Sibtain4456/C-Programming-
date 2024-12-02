/*Aim : WAP to find a factorial of a number using iterative function.
Name : MOHD SIBTAIN RAZA KHAN
Roll no : 40
UIN     : 241A048
Division: A*/
#include<stdio.h>
int factorialIterative(int num) //function defination
{
    int prod=1;
    for(int i=1; i<=num; i++)
    {
        prod*=i; //prod=prod*i
    }
    return prod;
}

int main()
{
    int num;
    printf("\t\t\t***Iterative Factorial Function***\n\n"); //Title
    printf("Enter Number = ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorialIterative(num)); //function call
    return 0;
}
