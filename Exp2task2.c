/*Aim : WAP to find if entered number is even or odd.

Name    :MOHD SIBTAIN RAZA KHAN
Roll no :40
UIN     :241A048
Division:A
*/

#include<stdio.h>
int main()
{
    int num;
    printf("\t\t\t*****EVEN ODD FINDER*****\n\n\n");
    printf("Enter a Number=");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is Even",num);
    else
        printf("%d is Odd",num);
    return 0;
}
/*
Expected Output 1:
    *****EVEN ODD FINDER*****


    Enter Number:12
    12 is Even

Expected Output 2:
    *****EVEN ODD FINDER*****


    Enter Number:13
    13 is Odd
*/
