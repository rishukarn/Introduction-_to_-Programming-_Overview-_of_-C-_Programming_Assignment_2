//Write a C program that accepts two integers from the user and performs
//arithmetic, relational, and logical operations on them. Display the results.

#include <stdio.h>

int main(){
	
	int n1,n2;
	
	printf("\t\t\n Enter First number : ");
	scanf("%d",&n1);
	printf("\t\t\n Enter sec. number : ");
	scanf("%d",&n2);
	
	if(n1!=0 && n2 !=0){
		printf("\t\t\n Addition of two number is %d",n1+n2);
	};
	
}
	