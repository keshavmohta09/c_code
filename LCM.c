#include<stdio.h>
void main()
{
   int a,b,c,i=2,mul=1;
   printf("Enter the numbers\n");
   scanf("%d%d",&a,&b);
   c=a>b?a:b;
   while(i<=c)
   {
   if(a%i==0||b%i==0)
   {
      if(a%i==0)
      a=a/i;
      if(b%i==0)
      b=b/i;
      mul=mul*i;
   }
   else
    i++;
   }
   printf("%d",mul);
}