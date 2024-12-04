//Lab Challenge 3: Number Guessing Game
//Write a C program that implements a simple number guessing game. The programshouldgenerate a random number between 1 and 100, and the user should guess the number
//within a limited number of attempts. ? Challenge: Provide hints to the user if the guessed number is too high or too low.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Guess_number(int g);

int main()
{
	srand(time(0));
   	for(int i=0;i<1;i++){
	   		int num = (rand() % 100) + 1;
			printf("%d\n", num);
			Guess_number(num);
	}
   	
}

void Guess_number(int g){
	int limite=10,attemps=0;
	printf("\t\t\n .....You have 10 limite to guess to number..... ");
	while(limite>=1){
		int guess;
		printf("\t\t\n Guess a Number : ");
		scanf("%d",&guess);
		if(guess<g ){
			--limite;
			attemps++;
			printf("\t\t\n Guesses is to low... You have %d left attemps",limite);
			
			
		}else if(guess>g ){
			
			--limite;
			attemps++;
			printf("\t\t\n Guesses is to high... You have %d left attemps",limite);
		}else if(guess==g){
			printf("\t\t\n You Guess a Number");
			limite--;
			attemps++;
			break;
		}
		
	}
	if(limite==0){
		printf("\t\t\n You loss the game you cant guess the number and you dont have more attemp %d",limite);
	}else{
		printf("\t\t\n You win the game you guess the number in %d attemp",attemps);
	}
	
	
}
