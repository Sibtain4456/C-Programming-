/* Aim: WAP to calculate the sum of matrix 
Name     : MOHD SIBTAIN RAZA KHAN
Roll No  : 40
UIN      : 241A048
Division : A */

#include<stdio.h>
int main(){
int arr1[50][50], brr1[50][50], crr1[50][50], i, j ,n;

   //prompt user for input
   printf("\n\n Addition of two matrices :\n\n");
   printf("-------------------------\n");
   printf("Input the size of the square matrix :");
   scanf("%d",&n);


   //Input the elements for the first matrix
   printf("Input elements in the first matrix:\n");
   for(i = 0; i<n; i++){

    for( j = 0 ; j<n; j++){
        printf(" Element-[%d],[%d]:" , i ,j);
        scanf("%d",&arr1[i][j]);

    }
   }

   //Input the elements for the second matrix
   printf("Input elements in the second matrix:\n");
   for(i = 0; i<n; i++){

    for( j = 0 ; j<n; j++){
        printf(" Element-[%d],[%d]:" , i ,j);
        scanf("%d",&brr1[i][j]);

    }
   }

   //Display First Matrix
   printf("\n The First matrix is : \n");
   for(i = 0; i<n; i++){
    printf("\n");
    for(j= 0; j<n ; j++)
        printf("%d\t",arr1[i][j]);
   }
   //Display Second Matrix
   printf("\n The Second matrix is : \n");
   for(i = 0; i<n; i++){
    printf("\n");
    for(j= 0; j<n ; j++)
        printf("%d\t",brr1[i][j]);
   }

   //Calculate The sum of matrices
   for(i = 0; i<n; i++)
    for(j= 0; j<n ; j++)
        crr1[i][j] = arr1[i][j]+brr1[i][j];


    // Display the Addition of two matrices
    printf("\n The addition of two  matrix is : \n");
   for(i = 0; i<n; i++){
    printf("\n");
    for(j= 0; j<n ; j++)
        printf("%d\t",crr1[i][j]);
   }








return 0;



}
