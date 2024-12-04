//LAB EXERCISE 1: String Reversal ? 
//Write a C program that takes a string as input and reverses it using a function.
//Challenge: Write the program without using built-in string handling functions.

#include <stdio.h>

void String_reversal(char str[30]);

int main(){
	
	char str[30] ,f;
	printf("\t\t\n Enter a string : ");
	gets(str);
	
	String_reversal(str);
	
}

void String_reversal(char str[30]){
	length=0;
	
	for(int i=0;str[i]!='\0';i++){
		length+=1;
	}

	for(int i=length-1;i>=0;i--){
		printf("%c ",str[i]);
	}

}