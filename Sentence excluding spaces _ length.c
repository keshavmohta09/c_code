#include<stdio.h>
void main()
{
    char sen[100], final_sen[100];
    int len=0,i,j=0;
    printf("Enter the sentence:\n");
    gets(sen);
    
    for(i=0;sen[i]!='\0';i++)
    {
        if(sen[i]!=' ')
        {
           len++;
           final_sen[j]=sen[i];
           j++;
        }
    }
    
    printf("\n\nFinal sentence excluding spaces:\n");
    for(i=0;i<len;i++)
       printf("%c",final_sen[i]);
    
    printf("\n\nThe total number of letters in this sentence excluding spaces: %d",len);
    
}