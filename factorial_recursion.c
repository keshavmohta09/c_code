#include<stdio.h>
int fct(int a)
{
  if(a==0||a==1)
  return 1;
  else
  return (a*fct(a-1));
}
main()
{
  int b;
  printf("Enter the number: ");
  scanf("%d",&b);
  printf("the factorial of %d is %d",b, fct(b));
  return 0;
}