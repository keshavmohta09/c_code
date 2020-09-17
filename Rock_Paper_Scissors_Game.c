#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int random_number()
{
	srand(time(NULL));
	return rand()%3;
}

int main()
{	
	char name[20];
	int temp_choice, choice, n, temp, replay, player_point=0, computer_point=0;

	printf("\n***************Welcome to Rock Paper Scissors game.***************\n\n");

	printf("Enter the name of the player: ");
	gets(name);
	play_again: // If player wants to replay the game.
	printf("Enter the number of matches: ");
	scanf("%d",&n);
	printf("\nPress 1 for rock\nPress 2 for paper\nPress 3 for scissor\n");

	for(int i=0;i<n;i++)
	{
	    again: // If player press the wrong key.
		printf("\nEnter your choice\n");
		scanf("%d",&temp_choice);
		choice=temp_choice-1;
		if(choice>2||choice<0)
		{
			printf("%s, enter the correct number",name);
			printf("\nPress 0 for rock\nPress 1 for paper\nPress 2 for scissor\n");
			goto again;
		} 
		else
		{
			temp = random_number();
			printf("Computer's choice\n%d\n\n",temp+1); // To make it easier to understand.
				
			if(choice==0)
				printf("%s choose 'Rock'",name);
			else if(choice==1)
				printf("%s choose 'Paper'",name);
			else
				printf("%s choose 'Scissor'",name);
			
			printf(" and ");
			
			if(temp==0)
				printf("Computer choose 'Rock'");
			else if(temp==1)
				printf("Computer choose 'Paper'");
			else
				printf("Computer choose 'Scissor'");
			
			if((choice==0&&temp==2)||(choice==1&&temp==0)||(choice==2&&temp==1))
        	{
				player_point++;
				printf("\n%s's point = %d and Computer's point = %d\n",name,player_point,computer_point);
       	 	}
			else if (choice==temp)
			{
				player_point++;
				computer_point++;
				printf("\n%s's point = %d and Computer's point = %d\n",name,player_point,computer_point);
			}
			else
			{
				computer_point++;
				printf("\n%s's point = %d and Computer's point = %d\n",name,player_point,computer_point);
			}
		}
	}

    if(player_point>computer_point)
    	printf("\n%s win\n",name);
    else if(player_point==computer_point)
    	printf("\nPoints are equal.\nDraw\n");
    else
    	printf("\nComputer win\n");

	printf("\n\nIf you want to replay then press 5 else press any number: ");
	scanf("%d",&replay);
	printf("\n\n");
	if(replay==5)
	{
		player_point=0,computer_point=0;
		goto play_again;
	}

	return 0;
}