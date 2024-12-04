//Write a C program to demonstrate pointer usage. Use a pointer to modifythevalue of a variable and print the result.

#include <stdio.h>

int main(){
	
	int num=98;
	int *p=&num;
	
	printf("\t\t\n %d",*p);
	printf("\t\t\n %p", p);
	
}