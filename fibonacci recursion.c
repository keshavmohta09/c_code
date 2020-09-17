#include<stdio.h>
int fibo(int add,int x1,int x2,int m)
{
    if(add<=m)
    {
        add=x1+x2;
        if(add<=m)
        printf("%d ",add);
        x1=x2,x2=add;
        return fibo(add,x1,x2,m);
    }
}
void main()
{
   int num1=-1,num2=1,sum=0,n;
   printf("Enter the last number of series: ");
   scanf("%d",&n);
   fibo(sum,num1,num2,n);
}