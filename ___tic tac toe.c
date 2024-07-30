//game to play tic tac toe (X or O)

#include<stdio.h>
int main()
{
	int _1,_2,_3,_4,_5,_6,_7,_8,_9;
	_1='?'; 
	_2='?';
	_3='?';
	_4='?';
	_5='?';
	_6='?';
	_7='?';
	_8='?';
	_9='?';
	
	printf("the original form in the beginning is :\n");
	printf("-------------------------\n");
	printf("| %c(1) | %c(2) | %c(3) |\n",_1,_2,_3);
	printf("| %c(4) | %c(5) | %c(6) |\n",_4,_5,_6);
	printf("| %c(7) | %c(8) | %c(9) |\n",_7,_8,_9);
	printf("-------------------------\n");
	printf("enter the following location numbers to make your move-----\n\n");
	
	int player1, player2, movePlayed1, movePlayed2;
	int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
	int correctEntry;
	int main_entry;
	int wincount1=0,wincount2=0;
	
	main_entry=1;
	while(main_entry==1)
	{
		correctEntry=1;
		while(correctEntry==1)
		{
			printf("player1 make your move = ");
			scanf("%d",&player1);
			
			if(player1==1||player1==2||player1==3||player1==4||player1==5||player1==6||player1==7||player1==8||player1==9)
			{
				movePlayed1=player1;
				printf("Player1 made a move == %d \n",movePlayed1);
				
				if(player1==1 && count1==0)
				{
					_1='X';
					count1++;
					correctEntry=0;
					break;
				}				
				if(player1==2 && count2==0)
				{
					_2='X';
					count2++;
					correctEntry=0;
					break;
				}				
				if(player1==3 && count3==0)
				{
					_3='X';
					count3++;
					correctEntry=0;
					break;
				}							
				if(player1==4 && count4==0)
				{
					_4='X';
					count4++;
					correctEntry=0;
					break;
				}
				if(player1==5 && count5==0)
				{
					_5='X';
					count5++;
					correctEntry=0;
					break;
				}
				if(player1==6 && count6==0)
				{
					_6='X';
					count6++;
					correctEntry=0;
					break;
				}
				if(player1==7 && count7==0)
				{
					_7='X';
					count7++;
					correctEntry=0;
					break;
				}
				if(player1==8 && count8==0)
				{
					_8='X';
					count8++;
					correctEntry=0;
					break;
				}
				if(player1==9 && count9==0)
				{
					_9='X';
					count9++;
					correctEntry=0;
					break;
				}
				else
				{
					printf("\nenter again :------------------------ \n\n");
				}
			}
		}
		if(movePlayed1==1)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==2)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==3)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==4)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==5)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==6)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==7)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==8)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed1==9)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(count1==1&&count2==1&&count3==1&&count4==1&&count5==1&&count6==1&&count7==1&&count8==1&&count9==1)
		{
			main_entry=0;
			if(wincount1==wincount2)
			{
				printf("\t\t\tthis match has turned to be DRAW game");
				break;
			}
		}
		if((_1=='X' && _2=='X' && _3=='X')||(_4=='X' && _5=='X' && _6=='X')||(_7=='X' && _8=='X' && _9=='X')||(_1=='X' && _4=='X' && _7=='X')||(_2=='X' && _5=='X' && _8=='X')||(_3=='X' && _6=='X' && _9=='X')||(_1=='X' && _5=='X' && _9=='X')||(_3=='X' && _5=='X' && _7=='X')||(_2=='X' && _5=='X' && _8=='X')||(_4=='X' && _5=='X' && _6=='X'))
		{
			main_entry=0;
			printf("\t\t\tPlayer1 wins this game");
			wincount1++;
			break;
		}	
		
		correctEntry=1;
		while(correctEntry==1)
		{
			printf("player2 make your move = ");
			scanf("%d",&player2);
			
			if(player2==1||player2==2||player2==3||player2==4||player2==5||player2==6||player2==7||player2==8||player2==9)
			{
				movePlayed2=player2;
				printf("Player2 made a move == %d \n",movePlayed2);
				
				if(player2==1 && count1==0)
				{
					_1='O';
					count1++;
					correctEntry=0;
					break;
				}				
				if(player2==2 && count2==0)
				{
					_2='O';
					count2++;
					correctEntry=0;
					break;
				}				
				if(player2==3 && count3==0)
				{
					_3='O';
					count3++;
					correctEntry=0;
					break;
				}							
				if(player2==4 && count4==0)
				{
					_4='O';
					count4++;
					correctEntry=0;
					break;
				}
				if(player2==5 && count5==0)
				{
					_5='O';
					count5++;
					correctEntry=0;
					break;
				}
				if(player2==6 && count6==0)
				{
					_6='O';
					count6++;
					correctEntry=0;
					break;
				}
				if(player2==7 && count7==0)
				{
					_7='O';
					count7++;
					correctEntry=0;
					break;
				}
				if(player2==8 && count8==0)
				{
					_8='O';
					count8++;
					correctEntry=0;
					break;
				}
				if(player2==9 && count9==0)
				{
					_9='O';
					count9++;
					correctEntry=0;
					break;
				}
				else
				{
					printf("\nenter again :------------------------ \n\n");
				}
			}
		}
		if(movePlayed2==1)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==2)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==3)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==4)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==5)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==6)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==7)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==8)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		if(movePlayed2==9)
		{
			printf("the updated form in the board is :\n");
			printf("----------------\n");
			printf("| %c | %c | %c |\n",_1,_2,_3);
			printf("| %c | %c | %c |\n",_4,_5,_6);
			printf("| %c | %c | %c |\n",_7,_8,_9);
			printf("----------------\n\n");
		}
		
		if(count1==1&&count2==1&&count3==1&&count4==1&&count5==1&&count6==1&&count7==1&&count8==1&&count9==1)
		{
			main_entry=0;
			if(wincount1==wincount2)
			{
				printf("\t\t\tthis match has turned to be DRAW game");
				break;
			}
		}
		
		if((_1=='O' && _2=='O' && _3=='O')||(_4=='O' && _5=='O' && _6=='O')||(_7=='O' && _8=='O' && _9=='O')||(_1=='O' && _4=='O' && _7=='O')||(_2=='O' && _5=='O' && _8=='O')||(_3=='O' && _6=='O' && _9=='O')||(_1=='O' && _5=='O' && _9=='O')||(_3=='O' && _5=='O' && _7=='O')||(_2=='O' && _5=='O' && _8=='O')||(_4=='O' && _5=='O' && _6=='O'))
		{
			main_entry=0;
			printf("\t\t\tPlayer2 wins this game");
			wincount2++;
			break;
		}
	}	
	
	return 0;
}