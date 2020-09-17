#include<stdio.h>
#include<math.h>
void main()
{
   double e=2.718281828,a;
   int n;
   printf("enter e^");
   scanf("%d",&n);
   a=pow(e,n);
   printf("the value of e^%d is %lf",n,a);
}