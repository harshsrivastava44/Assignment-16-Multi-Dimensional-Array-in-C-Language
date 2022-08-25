//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum;
 printf("Enter 9 elements of first matrices :\n");
    for ( i = 0; i <3; i++)
      for(j=0;j<3;j++)
      scanf("%d",&A[i][j]);
printf("Enter 9 elements for Second matrices :\n");
    for ( i = 0; i <3; i++)
      for(j=0;j<3;j++)
      scanf("%d",&B[i][j]);

for ( i = 0; i <=2; i++)
    {
      for(j=0;j<=2;j++)
      {  sum=0;
        for ( k = 0; k<=2; k++)
        sum=sum +(A[i][k]*B[k][j]);
        C[i][j]=sum;
      }
    }
      for ( i=0;i<=2; i++)
      {
        for(j=0;j<=2;j++)
      printf("%d  ",C[i][j]);
       printf("\n");
      }
      return 0;
}