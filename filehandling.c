#include<stdio.h>
#include<string.h>
void main()
{
    FILE *ptr=NULL;
    char c[50];
    char string[50];// = "\n\nHi Keshav Mohta. How are you?";
    ptr = fopen("file.txt","r");
    //fprintf(ptr,"%s",string);
   // fscanf(ptr,"%s",&string);
  // char c = fgetc(ptr);
   fgets(string,50,ptr);
   //printf("%s",c);
    puts(string);
 //  rewind(ptr);
 //fputs(string,ptr);
 int d = strlen(string);
 for(int i = 0;i<d;i++)
 {
    c[i]=string[i];
 }
 for(int i = 0;i<d;i++)
 {
    printf("%c",c[i]);
 }

   fclose(ptr);

}