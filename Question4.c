//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0,x,y;
  printf("Enter the numbers  of rows and columns :\n");
    scanf("%d%d",&x,&y);
 printf("Enter elements of matrices :\n");
    for ( i=0;i<x;i++)
      for(j=0;j<y;j++)
         scanf("%d",&A[i][j]);

    for ( i=0;i<x;i++)
      for(j=y-1;j>=0;j--)
        sum=sum+A[i][j];

   for ( i = 0; i <x; i++)
   {
      for(j=0;j<y;j++)
        {
      printf("%d ",A[i][j]);
        }
      printf("\n");
    }

    printf("The sum RIGHT Diagonals of matrices is== %d ",sum);
    printf("\n");

    return 0;
}
