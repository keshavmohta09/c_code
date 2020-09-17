#include<stdio.h>
void main()
{
 int a,b,k,rev=0;
 scanf("%d",&a);
 for(k=a;k!=0;k=k/10)
 {
  b=k%10;
  rev = rev*10+b;
  
 }
printf("%d",rev);
}