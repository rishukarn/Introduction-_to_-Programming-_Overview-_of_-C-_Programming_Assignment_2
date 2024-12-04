//LAB EXERCISE 2: Multiplication Table


//? Write a C program that takes an integer input from the user and prints its multiplicationtable using a for loop.
// ? Challenge: Allow the user to input the range of the multiplication table (e.g., from1 toN).


#include <stdio.h>

int main(){
	
	int table;
	printf("\t\t\n Enter a number to print table: ");
	scanf("%d",&table);
//	Write a C program that takes an integer input from the user and prints its multiplicationtable using a for loop.
//	for(int i=1;i<=10;i++){
//		printf("\t\t\n %d * %d = %d",table,i,table*i);
//	}


//	 Allow the user to input the range of the multiplication table (e.g., from1 toN).
	for(int i=1;i<=table;i++){
		printf("\t\t\n.........Table of %d.............",i);
		for(int j=1;j<=10;j++){
			printf("\t\t\n %d * %d = %d",i,j,i*j);
		}
	}
}