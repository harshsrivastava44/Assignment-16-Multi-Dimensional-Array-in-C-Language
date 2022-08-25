//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
     int A[10][10],i,j,x,y,count=0;
    printf("Enter the numbers  of rows and columns :\n");
    scanf("%d%d",&x,&y);
 printf("Enter elements of  matrices :\n");
    for ( i = 0; i <x; i++)
      for(j=0;j<y;j++)
      scanf("%d",&A[i][j]);
      if(A[i][j]!=0)
        count++;
        for ( i = 0; i <x; i++)
    {
        for(j=0;j<y;j++)
          printf("%d ",A[i][j]);
          printf("\n");

      }
    if(count<(x*y/2))
    printf("It is a Sparse matrix");
    else
    printf("Not a sparse matrix");
    return 0;

}