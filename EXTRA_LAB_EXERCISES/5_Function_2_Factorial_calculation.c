//LAB EXERCISE 2: Factorial Calculation

//Write a C program that calculates the factorial of a given number using a function. ?
//Challenge: Implement both an iterative and a recursive version of the factorial functionandcompare their performance for 

#include <stdio.h>


//..............................iterative function.............................................
//int factorial(int n);
//
//
//int main(){
//	int n,f;
//	printf("\t\t\n Enter number to find a factorial: ");
//	scanf("%d",&n);
//	f=factorial(n);
//	printf("\t\t\n factorial of %d is : %d",n,f);
//}
//
//
//int factorial(int n){
//	
//	int fact=1;
//	
//	for(int i=1;i<=n;i++){
//		fact=fact*i;
//	}
//	return fact;
//}



//..............................recursive function.............................................
int factorial(int n);

int main(){
	int n,f;
	printf("\t\t\n Enter number to find a factorial: ");
	scanf("%d",&n);
	f=factorial(n);
	printf("\t\t\n factorial of %d is : %d",n,f);
}


int factorial(int n){
	
	if(n==0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}


















