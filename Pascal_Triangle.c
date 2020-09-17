#include<stdio.h>

int fact(int x)
{
    int fct=1;
    for(int i=x;i>0;i--)
    {
       fct=fct*x;
       x--;
    }
    return fct;
}

int nCr(int n,int r)
{ 
    int x;
    return x=fact(n)/(fact(n-r)*fact(r));
}

void main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
       for(int j=row;j>i;j--)
          printf(" ");
       for(int j=0;j<=i;j++)
          printf("%d ",nCr(i,j));
       printf("\n");
    }
}