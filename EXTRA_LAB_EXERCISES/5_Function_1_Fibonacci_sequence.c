//LAB EXERCISE 1: Fibonacci Sequence
//
//Write a C program that generates the Fibonacci sequence up to N terms using a recursive function. ?
//Challenge: Modify the program to calculate the Nth Fibonacci number using both iterativeand recursive methods. Compare their efficiency.

#include <stdio.h>

//recursive methods
//int fibonacci(int n);
//
//int main(){
//	
//	int n ,i;
//	printf("\t\t\n Enter number to generates the fibonacci sequence: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("%d ",fibonacci(i));
//	}
//	
//}
//
//int fibonacci(int n){
//	
//	if(n==0){
//		return 0;
//	}else if (n==1){
//		return 1;
//	}else{
//		return fibonacci(n-1)+fibonacci(n-2);
//	}
//}

//Iterative methods

void fibonacci(int n);

int main(){
	int n ;
	printf("\t\t\n Enter number to generates the fibonacci sequence: ");
	scanf("%d",&n);
	fibonacci(n);
}



void fibonacci(int n){
	int a=0,b=1,c;
	for(int i=0;i<n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}









