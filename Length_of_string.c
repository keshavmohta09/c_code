#include<stdio.h>
void main()
{
   char c[100];
   int count=0;
   printf("enter a sentence:\n");
   scanf("%[^\n]%*c",&c);
   //gets(c);
   for(int i=0;c[i]!='\0';i++)
   {
    if(c[i]!='\0')
      count++;
   }
   printf("Length of string = %d",count);
}