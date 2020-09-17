#include<stdio.h>
void main()
{
    int s,n;
    double d,p,a,root;
    printf("Enter a number: ");
    scanf("%d",&s);
    if(s<0)
        printf("enter a positive integer");
    else if(s==0)
        printf("square root of 0 is 0");
    else
    {
        n=1;
        while(!(s>=n*n && s<(n+1)*(n+1)))
        {
            n++;
        }
        d=s-(n*n);
        p=d/(2*n);
        a=n+p;
        root=a-((p*p)/(2*a));
        printf("\nSquare root of %d is %0.3f",s,root);
    }
}    