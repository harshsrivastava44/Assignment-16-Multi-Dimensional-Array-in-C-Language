//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum,x,y;
  printf("Enter the numbers  of rows and columns :\n");
    scanf("%d%d",&x,&y);
 printf("Enter elements of matrices :\n");
    for ( i=0;i<x;i++)
        {
      for(j=0;j<y;j++)
         scanf("%d",&A[i][j]);
         }

    for ( i=0;i<x;i++)
    {
      for(j=0;j<y;j++)
      printf("%d ",A[i][j]);
      printf("\n");
    }
  for ( i=0;i<x;i++)
  {    sum=0;
      for(j=0;j<y;j++)
      {
         sum=sum+A[i][j];
       }
       printf("sum of row %d ==%d",i,sum);
       printf("\n");
 }
  for ( i=0;i<x;i++)
  {    sum=0;
      for(j=0;j<y;j++)
      {
         sum=sum+A[j][i];
       }
       printf("sum of column %d ==%d",i,sum);
       printf("\n");
 }


         return 0;
}
