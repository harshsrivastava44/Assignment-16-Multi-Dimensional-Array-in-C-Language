//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],i,j,sum;
 printf("Enter 9 elements of first matrices :\n");
    for ( i = 0; i <3; i++)
      for(j=0;j<3;j++)
      scanf("%d",&A[i][j]);

for ( j= 0; j<=2; j++)
    {
      for(i=0;i<=2;i++)
      {  sum=0;
       sum=A[i][j] ;
        B[i][j]=sum;
      }
    }
      for ( j=0;j<=2; j++)
      {
        for(i=0;i<=2;i++)
      printf("%d  ",B[i][j]);
       printf("\n");
      }
      return 0;
}
