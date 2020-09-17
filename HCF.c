#include<stdio.h>
void main()
{
   int a,b,c,i=2,mul=1;
   printf("Enter the numbers\n");
   scanf("%d%d",&a,&b);
   c=a<b?a:b;
   while(i<=c)
   {
   if(a%i==0&&b%i==0)
      a/=i,b/=i,mul*=i;
   else
    i++;
   }
   printf("%d",mul);
}