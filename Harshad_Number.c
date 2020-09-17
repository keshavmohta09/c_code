#include<stdio.h>
int add_digit(int x)
{
   int z=0;
   while(x!=0)
   {
       int y=x%10;
       z+=y;
       x/=10;
   }
   return z;
}
void main()
{
   int a=1,n,b;
   printf("Enter the last number: ");
   scanf("%d",&n);
   do
   {
   b=add_digit(a);
   if(a%b==0)
     printf("%d ",a);
   a++;
   } while(a<=n);
}