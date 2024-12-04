//LAB EXERCISE 1: Simple Calculator


//Write a C program that acts as a simple calculator. The program should take two numbers
//and an operator as input from the user and perform the respective operation
//(addition, subtraction, multiplication, division, or modulus) 
//using operators. ? Challenge: Extend the program to handle invalid operator inputs.



#include <stdio.h>

int main(){
	
	int num1,num2;
	char operators, cont;
	
	do{
		printf("\t\t\n Enter your 1st Number: ");
		scanf("%d",&num1);
		printf("\t\t\n Enter any operators(+,-,*,/,%) among them: ");
		scanf(" %c",&operators);
		printf("\t\t\n Enter your 2nd Number: ");
		scanf("%d",&num2);
		
		switch(operators){
			case '+':{
				printf("\t\t\n Addition of two number: %d",num1+num2);
				break;
			}
			case '-':{
				printf("\t\t\n Subtraction of two number: %d",num1-num2);
				break;
			}
			case '*':{
				printf("\t\t\n Multiplication of two number: %d",num1*num2);
				break;
			}
			case '/':{
				printf("\t\t\n Division of two number: %d",num1/num2);
				break;
			}
			case '%':{
				printf("\t\t\n modulus of two number: %d",num1%num2);
				break;
			}
			default:{
				printf("\t\t\n invalid operators!");
				break;
			}
		}
		printf("\t\t\n Do you want to contirnu ? y & n : ");
		scanf(" %c",&cont);
	}while(cont=='y');
	

	
	
}