#include<stdio.h>
void main()
{
  int a,k,fctrl=1;
  scanf("%d",&a);
  for(k=a;k!=0;k=k-1)
  {
     fctrl = fctrl*k;
   }
  printf("%d",fctrl);
}