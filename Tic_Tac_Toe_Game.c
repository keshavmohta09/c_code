#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_number()
{
	srand(time(NULL));
	int x = rand()%8;
	return x;
}

int playwithcomputer()
{
    int choice1,choice2,a = 0,b=0,q=0;
    int temp_array[8];
    char player[20];
    char array[9] = {' ',' ',' ',' ',' ',' ',' ',' ','\0'};

    printf("\n\n**********Welcome to Tic Tac Toe game**********\n\n");
    printf("Enter the name of player: ");
    scanf("%s",&player);
    printf("%s's choice is X and Computer's choice is O\n\n",player);
    for(int l=0;l<=8;l++)
    {
        printf("  %d  ",l+1);
        if(l==0||l==1||l==3||l==4||l==6||l==7)
            printf("|");
            if(l==2||l==5)
                printf("\n-----------------\n");
    }

    printf("\n\nPress any of the given number for any place - \n");
    
    while (a<9)
    {
        again1:
        printf("\n\n%s's turn: ",player);
        scanf("%d",&choice1);
        printf("\n");
        for(int i=0;i<=8;i++)
        {
            if(choice1==1&&q==0)
            {
                q++;
                goto exclude1;
            }
            if(temp_array[i]==choice1)
            {
                printf("\nThe number has been used before");
                goto again1;
            }
        }
        exclude1:
        if(choice1>9||choice1<1)
        {
            printf("\nEnter the number between 1 and 9");
            goto again1;
        }
        array[choice1-1]='X';
        for(int l=0;l<=8;l++)
	    {
	        printf("   %c  ",array[l]);
		    if(l==0||l==1||l==3||l==4||l==6||l==7)
                printf("|");
		    if(l==2||l==5)
			    printf("\n---------------------\n");
	    }
        temp_array[b] = choice1;
        if(((array[0]==array[1])&&(array[0]==array[2])&&(array[0]=='X'))||((array[0]==array[4])&&(array[0]==array[8])&&(array[0]=='X'))||((array[2]==array[4])&&(array[2]==array[6])&&(array[2]=='X'))||((array[3]==array[4])&&(array[3]==array[5])&&(array[3]=='X'))||((array[6]==array[7])&&(array[6]==array[8])&&(array[6]=='X'))||((array[2]==array[5])&&(array[2]==array[8])&&(array[2]=='X'))||((array[1]==array[4])&&(array[1]==array[7])&&(array[1]=='X'))||((array[0]==array[3])&&(array[0]==array[6])&&(array[0]=='X')))
        {
            printf("\n\n_____%s win_____\n\n",player);
            goto last;
        }
        a++;
        b++;

        if(a<9)
        {
			again2:
            choice2 = random_number()+1;
            for(int i=0;i<9;i++)
            {
                if(choice2==1&&q==0)
                {
                    q++;
                    goto exclude2;
                }
                if(temp_array[i]==choice2)
                {
                    goto again2;
                }
            }
            exclude2:
            if(choice1==choice2)
            {
                goto again2;
            }
			printf("\n\nComputer's turn: %d\n\n",choice2);
            array[choice2-1]='O';
            for(int l=0;l<=8;l++)
            {
                printf("   %c  ",array[l]);
                if(l==0||l==1||l==3||l==4||l==6||l==7)
                    printf("|");
                if(l==2||l==5)
                    printf("\n---------------------\n");
            }
            temp_array[b] = choice2;
            if(((array[0]==array[1])&&(array[0]==array[2])&&(array[0]=='O'))||((array[0]==array[4])&&(array[0]==array[8])&&(array[0]=='O'))||((array[2]==array[4])&&(array[2]==array[6])&&(array[2]=='O'))||((array[3]==array[4])&&(array[3]==array[5])&&(array[3]=='O'))||((array[6]==array[7])&&(array[6]==array[8])&&(array[6]=='O'))||((array[2]==array[5])&&(array[2]==array[8])&&(array[2]=='O'))||((array[1]==array[4])&&(array[1]==array[7])&&(array[1]=='O'))||((array[0]==array[3])&&(array[0]==array[6])&&(array[0]=='O')))
            {
                printf("\n\n_____Computer win_____\n\n");
                goto last;
            }
            a++;
            b++;
        }
        
    }
    printf("\n\n_____Draw_____\n\n");
    last:
    return 1;
}

int playwithuser()
{
    int choice1,choice2,a = 0,b=0,q=0;
    int temp_array[8];
    char player1[20],player2[20];
    char array[9] = {' ',' ',' ',' ',' ',' ',' ',' ','\0'};

    printf("\n\n**********Welcome to Tic Tac Toe game**********\n\n");
    printf("Enter the name of player1: ");
    scanf("%s",&player1);
    printf("Enter the name of player2: ");
    scanf("%s",&player2);
    printf("%s's choice is X and %s's choice is O\n\n",player1,player2);
    for(int l=0;l<=8;l++)
    {
        printf("  %d  ",l+1);
        if(l==0||l==1||l==3||l==4||l==6||l==7)
            printf("|");
            if(l==2||l==5)
                printf("\n-----------------\n");
    }

    printf("\n\nPress any of the given number for any place - \n");
    
    while (a<9)
    {
        again1:
        printf("\n\n%s's turn: ",player1);
        scanf("%d",&choice1);
        printf("\n");
        for(int i=0;i<=8;i++)
        {
            if(choice1==1&&q==0)
            {
                q++;
                goto exclude1;
            }
            if(temp_array[i]==choice1)
            {
                printf("\nThe number has been used before");
                goto again1;
            }
        }
        exclude1:
        if(choice1>9||choice1<1)
        {
            printf("\nEnter the number between 1 and 9");
            goto again1;
        }
        array[choice1-1]='X';
        for(int l=0;l<=8;l++)
	    {
	        printf("   %c  ",array[l]);
		    if(l==0||l==1||l==3||l==4||l==6||l==7)
                printf("|");
		    if(l==2||l==5)
			    printf("\n---------------------\n");
	    }
        temp_array[b] = choice1;
        if(((array[0]==array[1])&&(array[0]==array[2])&&(array[0]=='X'))||((array[0]==array[4])&&(array[0]==array[8])&&(array[0]=='X'))||((array[2]==array[4])&&(array[2]==array[6])&&(array[2]=='X'))||((array[3]==array[4])&&(array[3]==array[5])&&(array[3]=='X'))||((array[6]==array[7])&&(array[6]==array[8])&&(array[6]=='X'))||((array[2]==array[5])&&(array[2]==array[8])&&(array[2]=='X'))||((array[1]==array[4])&&(array[1]==array[7])&&(array[1]=='X'))||((array[0]==array[3])&&(array[0]==array[6])&&(array[0]=='X')))
        {
            printf("\n\n_____%s win_____\n\n",player1);
            goto last;
        }
        a++;
        b++;

        if(a<9)
        {
            again2:
            printf("\n\n%s's turn: ",player2);
            scanf("%d",&choice2);
            printf("\n");
            for(int i=0;i<9;i++)
            {
                if(choice2==1&&q==0)
                {
                    q++;
                    goto exclude2;
                }
                if(temp_array[i]==choice2)
                {
                    printf("\nThe number has been used before");
                        goto again2;
                }
            }
            exclude2:
            if(choice1==choice2)
            {
                printf("\nThe number has been used before");
                goto again2;
            }
            if(choice2>9||choice2<1)
            {
                printf("\nEnter the  number between 1 and 9");
                goto again2;
            }
            array[choice2-1]='O';
            for(int l=0;l<=8;l++)
            {
                printf("   %c  ",array[l]);
                if(l==0||l==1||l==3||l==4||l==6||l==7)
                    printf("|");
                if(l==2||l==5)
                    printf("\n---------------------\n");
            }
            temp_array[b] = choice2;
            if(((array[0]==array[1])&&(array[0]==array[2])&&(array[0]=='O'))||((array[0]==array[4])&&(array[0]==array[8])&&(array[0]=='O'))||((array[2]==array[4])&&(array[2]==array[6])&&(array[2]=='O'))||((array[3]==array[4])&&(array[3]==array[5])&&(array[3]=='O'))||((array[6]==array[7])&&(array[6]==array[8])&&(array[6]=='O'))||((array[2]==array[5])&&(array[2]==array[8])&&(array[2]=='O'))||((array[1]==array[4])&&(array[1]==array[7])&&(array[1]=='O'))||((array[0]==array[3])&&(array[0]==array[6])&&(array[0]=='O')))
            {
                printf("\n\n_____%s win_____\n\n",player2);
                goto last;
            }
            a++;
            b++;
        }
        
    }
    printf("\n\n_____Draw_____\n\n");
    last:
    return 1;
}
int main()
{
    int playwith;
    repeat:
    printf("\nFor play with computer press 1 else press 2: ");
    scanf("%d",&playwith);
    switch(playwith)
    {
        case 1:
            playwithcomputer();
            break;
        case 2:
            playwithuser();
            break;
        default:
            printf("Enter the correct number");
            goto repeat;
    }
}