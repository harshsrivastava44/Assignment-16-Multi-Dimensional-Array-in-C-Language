//5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int A[2][3],i,j,sum=0,x,y;
   
 printf("Enter elements of matrices :\n");
    for ( i=0;i<3;i++)
      for(j=0;j<3;j++)
        scanf("%d",&A[i][j]);
        
    for ( i=0;i<3;i++)
       {
      for(j=0;j<3;j++)
      printf("%d ",A[i][j]);
      printf("\n");
       }

   
      sum=A[0][2] + A[1][1] + A[2][0];
    printf("the sum of left diagonal is =%d ",sum);
    return 0;
}