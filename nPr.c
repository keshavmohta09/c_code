#include<stdio.h>
double fct(double a)
{
   double b=1;
   while(a>0)
   {
     b=b*a;
     a--; 
   }
   return b;
}
void main()
{
   int n,r;
   double  x,i,j;
   printf("Enter n: ");
   scanf("%d",&n);
   printf("Enter r: ");
   scanf("%d",&r);
   i=fct(n);
   j=fct(n-r);
   x=i/j;
   printf("P(%d,%d) = %ld",n,r,(long)x);
}