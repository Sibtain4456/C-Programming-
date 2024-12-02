/* Aim: WAP to find the largest element in an array. 
Name     : MOHD SIBTAIN RAZA KHAN
Roll No  : 40
UIN      : 241A048
Division : A */
#include<stdio.h>
int main()

{
    int n,i, a[100],large;

    printf("Enter the number of elements:");

    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
    {
        printf("Enter A Value:");

        scanf("%d",&a[i]);
    }
    large=a[0];

    for(i=1;i<=n-1;i++)

    {
        if(large<a[i])
            large=a[i];
    }
    printf("The Largest nUmber is %d",large);













    return 0;

}
