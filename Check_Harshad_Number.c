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
   int a;
   printf("Enter the number: ");
   scanf("%d",&a);
   int b=add_digit(a);
   if(a%b==0)
     printf("%d is a harshad number",a);
   else
     printf("%d is not a harshad number",a);
}