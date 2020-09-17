#include<stdio.h>
void main()
{
   int num,n=1,sum=0;
   printf("Enter a number ");
   scanf("%d",&num);
   while(n<num)
   {
     if(num%n==0)
     sum=sum+n;
     n++;
   }
   if(sum==num)
   printf("It is a perfect number");
   else
   printf("It is not a perfect number");
}