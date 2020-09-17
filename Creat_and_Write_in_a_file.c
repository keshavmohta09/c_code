#include<stdio.h>
int main()
{
    char c[12] = "file.txt";
    char input[1000];
    int lines;
    FILE *ptr = NULL;
    ptr = fopen(c,"a+");
    printf("How many lines do you want to write in this file: ");
    scanf("%d",&lines);
    printf("Input text in file\n");
    printf("\n_______________________________________________________The lines are_____________________________________________________\n");
    for(int i=0;i<=lines;i++)
    {
        fgets(input,sizeof input,stdin);
        fputs(input,ptr);
    }
    fclose(ptr);
    return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
    char c[12] = "file.txt";
    FILE *ptr =  NULL;
    char string[1000],s[1000];
    int i=1;
    ptr = fopen(c,"r");
    string = getc(ptr);
    while(string!=EOF)
    {
        string = getc(ptr);
        if (string=="\n")
        {
            i++;
        }
        
    }
    fclose(ptr);
    printf("The number of lines in %s is %d",c,i);
    return 0;
}*/