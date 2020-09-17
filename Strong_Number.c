#include<stdio.h>
int fct(int a)
{
      int mul=1;    
      for(int i=1;i<=a;i++)      
          mul=mul*i;
      return mul;
}
void main()
{
      int start,end,rem,sum=0,temp;
      printf("Enter the last number: ");
      scanf("%d",&end);
      for(start=1;start<=end;start++)
      {
         temp=start;
         while(temp!=0)
        {
         rem=temp%10;
         sum+=fct(rem);
         temp/=10;
        }
        if(sum==start) 
         printf("%d ",sum);
        sum=0;
      }
}