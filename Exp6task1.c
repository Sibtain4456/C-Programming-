/* Aim: WAP to define a counter function to print how many times the function is called use storage classes.
Name     : MOHD SIBTAIN RAZA KHAN
Roll No  : 40
UIN      : 241A048
Division : A */
#include<stdio.h>
void counter(){
static int count=0;
count++;
printf("Counter Function Called :%d\n",count);

}
int main(){
    int i;
printf("\t\t\t** Storage Class **\n\n");

for(i=1;i<=31;i++)
{
    counter();
}
return 0;
