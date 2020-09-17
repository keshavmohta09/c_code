#include<stdio.h>
#include<math.h>
#define q x*3.1415/180
int a,b=1;
double fct(a,b)
{
   while(a!=0)
   {
    b=b*a;
    a=a-1;
   }
   return b;  
}    
void main()
{ 
   double sum1=0,sum2=0;
   int n;
   float x;
   printf("Enter the value of x of cos(x) sereis:-");
   scanf("%f",&x);
   printf("Enter the limit upto which you want to expand the sereis:-");
   scanf("%d",&n);
   n=n*2;
   for(a=0;a<n;a+=4)
        sum1=sum1+(pow(q,a)/fct(a,b));
   for(a=2;a<n;a+=4)
        sum2=sum2+(pow(q,a)/fct(a,b));
   printf("\ncos(%.1f): %lf",x,n,(sum1-sum2));
}