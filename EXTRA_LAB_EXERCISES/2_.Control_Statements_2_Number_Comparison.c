//LAB EXERCISE 2: Number Comparison

//Write a C program that takes three numbers from the user and determines:
//The largest number. o The smallest number. ? Challenge: Solve the problem using both if-else and switch-case statements

#include <stdio.h>

int main(){
	
	int a,b,c;
	printf("\t\t\n Enter a 1st number: ");
	scanf("%d",&a);
	printf("\t\t\n Enter a 2nd number: ");
	scanf("%d",&b);
	printf("\t\t\n Enter a 3rd number: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		if(b>c){
			printf("\t\t\n A is a Largest number and C is a Smollest number..");
		}else{
			printf("\t\t\n A is a Largest number and B is a Smollest number..");	
		}
	}else if (b>a && b>c){
		if(a>c){
			printf("\t\t\n B is a Largest number and C is a Smollest number..");
		}else{
			printf("\t\t\n B is a Largest number and A is a Smollest number..");
		}
	}else if (c>a && c>b){
		if(b>a){
			printf("\t\t\n C is a Largest number and A is a Smollest number..");
		}else{
			printf("\t\t\n C is a Largest number and B is a Smollest number..");	
		}
	}
}