#include<stdio.h>
void main()
{
   int a[100],n,i,sum=0;
   printf("Enter the no. of digits:- ");
   scanf("%d",&n);
   printf("Enter no.:-\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);  
      sum=sum+a[i];
   }
   printf("%d",sum);
   
}