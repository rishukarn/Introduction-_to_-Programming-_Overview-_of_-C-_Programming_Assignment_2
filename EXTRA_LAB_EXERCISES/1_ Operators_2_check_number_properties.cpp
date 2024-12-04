//LAB EXERCISE 2: Check Number Properties

//?Write a C program that takes an integer from the user and checks the following using
//different operators:
//o Whether the number is even or odd. 
//o Whether the number is positive, negative, or zero.
//Whether the number is a multiple of both 3 and 5.


#include <stdio.h>

int main(){
	
	int n;
	printf("\t\t\n Enter you a number: ");
	scanf("%d",&n);
	
	if(n>0){
		printf("\t\t\n Number is positive %d ",n);
			if(n%2==0){
				printf("\t\t\n This number is even : %d ",n);
				if(n%3==0 && n%5==0){
					printf("\t\t\n  This number is %d multiple of both 3 and 5 ",n);
				}else{
					printf("\t\t\n  This number is not %d multiple of both 3 and 5 ",n);	
				}
			}else{
				printf("\t\t\n This number is odd : %d ",n);
				if(n%3==0 && n%5==0){
					printf("\t\t\n  This number is %d multiple of both 3 and 5 ",n);
				}else{
					printf("\t\t\n  This number is not %d multiple of both 3 and 5 ",n);	
				}
			}
	}else if(n==0){
		printf("\t\t\n Number is zero %d ",n);
	}else{
		printf("\t\t\n Number is negative %d ",n);
	}
}