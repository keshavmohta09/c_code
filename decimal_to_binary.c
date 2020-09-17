#include<stdio.h>
void main()
{
   long long int num,temp1,result=0,temp2=1;
   printf("Enter a decimal number: "); 
   scanf("%lld",&num);  
   while(num>0)
   {
      temp1=num%2;
      num/=2;
      result=result+temp1*temp2;
      temp2*=10;
   }
   printf("The binary number:- %lld",result);
}