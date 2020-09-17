#include<stdio.h>
void main()
{
 int x,n;
 printf("enter a number to find its prime factors\t");
 scanf("%d",&n);
 if(n<=1)
 {
  printf("enter a value greater than 1");
  exit(0);
 }
 x=2;
 do
 {
  if(n%x==0)
  {
   printf("%d\t",x);
   n/=x;
  }
  else
      x++;
 }
 while(x<=n);
}