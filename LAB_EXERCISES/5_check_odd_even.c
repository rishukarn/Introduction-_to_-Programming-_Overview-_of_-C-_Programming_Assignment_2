//Write a C program to check if a number is even or odd using an if-else
//statement. Extend the program using a switch statement to display the monthname based on the user’s input (1 for January, 2 for February, etc.).


#include <stdio.h>

int main(){
	
	int check;
	
	printf("\t\t\n Enter number to check its odd or even: ");
	scanf("%d",&check);
	
	if(check%2==0 || check==0){
		printf("\t\t\n This no. is even %d",check);
	}else{
		printf("\t\t\n This no. is odd %d",check);
	}
	
	
	switch(check){
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		defualt:
			printf("nothing..........");
	}
		
}