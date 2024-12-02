/*Aim: WAP to get students PCM marks from the user and find the average.Use conditional operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
Name     : MOHD SIBTAIN RAZA KHAN
Roll No  : 40
UIN      : 241A043
Division : A */
#include<stdio.h>
int main()
{
    int P,C,M,avg;
printf("Enter Physics Marks:");
scanf("%d",&P);
printf("Enter Chemistry Marks:");
scanf("%d",&C);
printf("Enter Maths Marks:");
scanf("%d",&M);
avg = P+C+M / 3;


(avg>=50)?printf("eligible for admisssion"):printf("not eligible for admission");
return 0;

}
//OUTPUT
//Enter Physics Marks:55
//Enter Chemistry Marks:55
//Enter Maths Marks:55
//eligible for admisssion
//Process returned 0 (0x0)   execution time : 4.177 s
//Press any key to continue.
