//8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
    int A[10][10],i,j,sum,x,y;
    printf("Enter the numbers  of rows and columns :\n");
    scanf("%d%d",&x,&y);
 printf("Enter elements of first matrices :\n");
    for ( i=0;i<x;i++)
      for(j=0;j<y;j++)
      scanf("%d",&A[i][j]);
      printf("The Upper triangle :\n");

      for ( i=0;i<x;i++)
      {
        for(j=0;j<y;j++)
        {
            if(j>=i || j==y-1)
      printf("%d ",A[i][j]);
      else
        printf("0 ");
        }
        printf("\n");
      }
      return 0;
}
