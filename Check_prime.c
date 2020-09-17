#include<stdio.h>
int a,b=2,c,d;
void check(a)
{
   if(a==2)
  printf("number is prime"); 
   else
   {
      while(b<a)
    {
          c=a%b;
          if(c!=0)
          b++;
          else
        {
         printf("number is not prime"); 
            break;
        } 
    
    printf("number is prime");
    } 
      
   }
}
void main()
{
scanf("%d",&a);
check(a);
}
    