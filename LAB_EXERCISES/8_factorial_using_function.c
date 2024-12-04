//Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, , and call.
#include <stdio.h>

int factorial(int);

int main(){
	
	int n ,f;
	printf("\t\t\n Enter your no.: ");
	scanf("%d",&n);
	f=factorial(n);
	printf("\t\t\n Factorial of %d is %d",n,f);
}

int factorial(int n){
	
	int temp=1;
	for(int i=1;i<=n;i++){
		temp=temp*i;
	}
	return temp;
}