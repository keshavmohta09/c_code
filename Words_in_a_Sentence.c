#include<stdio.h>
void main()
{
   char c[100];
   int count=0;
   printf("enter a sentence:\n");
   gets(c);
   for(int i=0;c[i]!=0;i++)
   {
       if(c[i]==' ')
       count++;
   }
   printf("Number of words = %d",count+1);
}