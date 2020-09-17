#include<stdio.h>
int low(char);
int alpha(char);
void main()
{
char ch;
scanf("%c",&ch);
if(alpha(ch))
{
printf("it is alphabetic character\n");
if(low(ch))
{
printf("it is lower case character");
}
else
printf("it is upper case character");
}
else
printf("it is non alphabetic character");
}
int low(char ch)
{
if(ch>=97&&ch<=122)
return (1);
else
return (0);
}
int alpha(char c)
{
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
return (1);
else
return (0);
}