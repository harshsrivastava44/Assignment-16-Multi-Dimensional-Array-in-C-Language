//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
   char a[10][10];
   int i,j,x,y,sum=0,max=0,index=0;
   printf("enter the number of row and columns of matrices : \n");
   scanf("%d%d",&x,&y);
   printf("Enter elements of the matrices\n");
   for(i=0;i<x;i++)
    for(j=0;j<y;j++)
        scanf("%d",&a[i][j]);

 for(i=0;i<x;i++)
 {
    for(j=0;j<y;j++)
    printf("%d ",a[i][j]);
    printf("\n");
 }

  for(i=0;i<x;i++)
 {  sum=0;
    for(j=0;j<y;j++)
   {
      if(a[i][j]==1)
        sum=sum+a[i][j];
     }
        if (sum > max)
        {
           max=sum;
           index=i;
        }
        
 }
printf("Row %d with max number of 1s = %d \n",index,max);
 return 0;

}