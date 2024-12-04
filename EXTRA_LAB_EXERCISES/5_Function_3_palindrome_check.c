//LAB EXERCISE 3: Palindrome Check
//? Write a C program that takes a number as input and checks whether it is a palindromeusinga function. ? 
//Challenge: Modify the program to check if a given string is a palindrome.


#include <stdio.h>
#include <string.h>

//Write a C program that takes a number as input and checks whether it is a palindromeusinga function. 
//int palindrome(int n);
//
//int main(){
//	
//	int n,f;
//	printf("\t\t\n Enter number to find a factorial: ");
//	scanf("%d",&n);
//	f=palindrome(n);
//	if(f==1){
//		printf("\t\t\n %d is palindrome number ",n);
//	}else{
//		printf("\t\t\n %d is not palindrome number ",n);
//	}
//}
//
//
//int palindrome(int n){
//	
//	int num=n,rev=0;
//	
//	while(num!=0){
//		int temp=num%10;
//		rev=rev*10+temp;
//		num/=10;
//	}
//	return rev==n;
//}

//Modify the program to check if a given string is a palindrome.

void string_palindrome(char str[30]);


int main(){
	
	char str[30];
	
	printf("\t\t\n Enter number to find a factorial: ");
	gets(str);

	string_palindrome(str);
}


void string_palindrome(char str[30]){
	
//	printf("%s",str);
	char str1[30];
	for(int i=strlen(str);i>=0;i--){
		str1[strlen(str)-i]=str[i];
	}
	printf("%s=%s",str,str1);
	if(strcmp(str,str1)==0){
		printf("\t\t\n This is palindrome string. ");
	}else{
		printf("\t\t\n This is not palindrome string. ");
	}
	
}













