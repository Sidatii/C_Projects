#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int n, random;
char check[100];

begin:
srand(time(0));
random = rand() % 31;

	system("CLS");
	printf("                                .............................................\n"
	       "                                ######## WELCOME TO GUESS THE NUMBER ########\n"
	       "                                .................[BY Sidatt NH]..............\n\n"); 

	printf("                  -Hello there, this is a number guessing game.\n"
	       "                  -You are asked to guess a randomly generated number.\n"
	       "                  -The number you need to guess is included between 0 and 30.\n"
		   "                  -Do not worry there, you have infinit guesses until you secceed and we are going\n"
		   "                   to guide you through it each time you miss. In other words, we are going to give\n"
		   "                   you hints to help you guess the correct number\n\n"); 

start:
printf("Your random number is generated. now... ");
printf("\nWhat is your Guessed number??: ");
scanf("%d", &n);


	fgets(check, 100, stdin);
	while ( (n > 30) || (n < 0)  ||  (sscanf(check, "%d", &n)==0)){
		
		printf("Invalid input!!! \nPlease enter a number between 0 and 30: ");
		goto start;
		}

	
	if (n < random){
		
		if((random-n)<=5){
			printf("\n\nYour choice is: %d \nYou are too close!! You need to raise it a little... ", n);
			goto start;
		}
		
		else if((random-n)<=10){
			printf("\n\nYour choice is: %d \nYou are close!! You need to raise it a little... ", n);
			goto start;
		}
		
		else if((random-n)<=30){
			printf("\n\nYour choice is: %d \nYou are a little bit far!! You need to raise it further... ", n);
			goto start;
		}
		
		
	}
	else if (n > random){
		
		if((n-random)<=5){
			printf("\n\nYour choice is: %d \nYou are too close!! You need to lower it a little... ", n);
			goto start;
		}
		
		else if((n-random)<=10){
			printf("\n\nYour choice is: %d \nYou are close!! You need to lower it a little... ", n);
			goto start;
		}
		
		else if((n-random)<=30){
			printf("\n\nYour choice is: %d \nYou are a little bit far!! You need to lower it further... ", n);
			goto start;
		}
	}
	else if (n == random) {
		printf("\n\nYAAAAAAAAAAAY!!! You guessed it right %d \n\nIt CONGRATULATIONS!!!! I am proud of you\n\nLooks like someone is gonna win the lottery one day....\n\n ", n);
	
	}


	printf("                                .............................................\n"
	       "                                ###### WE HOPE YOU ENJOYED.  GOOD BYE. ######\n"
	       "                                .............................................\n\n"); 
	
	int m;
	printf("To guess another number type 1.\nTo Quit the program type any key.\nPlease type an option: ");
	scanf("%d", &m);
	
	switch (m) {
		case 1:
			goto begin;	
			break;
		default:
			break;
	}



return 0;

}

