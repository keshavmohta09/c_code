#include<stdio.h>
void main()
{
    int a,b,add=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    do
    {
      b=a;
      b=b%10;
      a/=10; 
      add=b+add;
    }while(b!=0);

    printf("%d",add);
}