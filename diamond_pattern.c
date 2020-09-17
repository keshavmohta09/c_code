#include<stdio.h>
void main()
{
   int num,n=1;
   printf("Enter the number of rows: ");
   scanf("%d",&num);
   int space=num;

   for(int k=1;k<=num;k++)
   {
      for(int i=1;i<space;i++)
         printf(" ");
      for(int j=1;j<=n;j++)
         printf("* ");
      n++,space--;
      printf("\n");
   }
   space=1,n=num-1;

   for(int k=1;k<=num;k++)
   {
      for(int i=1;i<=space;i++)
         printf(" ");
      for(int j=1;j<=n;j++)
         printf("* ");
      n--,space++;
      printf("\n");
   }

}