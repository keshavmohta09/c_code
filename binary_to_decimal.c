#include<stdio.h>
#include<math.h>
void main()
{
    long long int num,digit=-1,temp,sum=0;
    again:
    printf("Enter a valid binary number:- ");
    scanf("%lld",&num);
    while(num>0)
    {
        temp=num%10;
       if(temp==0||temp==1)
       {
        num/=10;
        digit++;
        sum=sum+(pow(2,digit)*temp);
       }
      else
       goto again;
    }
    printf("The decimal number:- %lld",sum);
}