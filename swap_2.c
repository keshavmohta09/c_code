#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping:-\na = %d\nb = %d\n",a,b);
    (a^=b),(b^=a),(a^=b);
    printf("\nAfter swapping:-\na = %d\nb = %d",a,b);
}