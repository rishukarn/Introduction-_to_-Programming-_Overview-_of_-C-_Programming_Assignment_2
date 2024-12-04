//3. Loops
//
//LAB EXERCISE 1: Prime Number Check
//
//Write a C program that checks whether a given number is a prime number or not using afor
//loop. ? Challenge: Modify the program to print all prime numbers between 1 and a given number.

#include <stdio.h>

int main(){
	
	int num,flage=0;
	
	printf("\t\t\n Enter a number to check its prime or not: ");
	scanf("%d",&num);
//Write a C program that checks whether a given number is a prime number or not using afor
	
//	for(int i=1;i<=num;i++){
//		if(num%i==0){
//			flage+=1;
//		}
//	}
////	printf("\t\t\n %d",flage);
//	if(flage<=2){
//		printf("\t\t\n %d This number is prime.",num);
//	}else{
//		printf("\t\t\n %d This number is not prime.",num);
//	}


//Modify the program to print all prime numbers between 1 and a given number.
	
	for(int i=1;i<=num;i++){
		flage=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				flage+=1;
			}
		}
		if(flage<=2){
			printf("\t\t\n prime number : %d",i);
		}
	}










}