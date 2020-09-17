#include<stdio.h>
#include<math.h>
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
 double sum=1;
 int n,x;
 printf("Enter e^");
 scanf("%d",&x);
 printf("Enter the term:- ");
 scanf("%d",&n);
for(a=1;a<n;a++)
{
   sum=sum+(pow(x,a)/fct(a,b));
}
printf("\nthe extension of e^%d is %lf",x,sum);
}