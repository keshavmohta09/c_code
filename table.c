#include<stdio.h>
void main()
{
    int num,temp=1,result;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(temp<=10)
    {
        result=temp*num;
        printf("\n%d X %d  =  %d",num,temp,result);
        temp++;
    }
    printf("\n");
}