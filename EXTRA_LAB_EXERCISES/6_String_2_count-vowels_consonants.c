//LAB EXERCISE 2: Count Vowels and Consonants

//Write a C program that takes a string from the user and counts the number of vowels andconsonants in the string.
//Challenge: Extend the program to also count digits and special characters.

#include <stdio.h>
void count(char str[30]);

int main(){
	char str[30];
	printf("\t\t\n Enter a string : ");
	gets(str);
	
	count(str);
}

void count(char str[30]){
	int vowels=0,consonants=0;
	char v[10]="AEIOUaeiou";
	for(int i=0;str[i]!='\0';i++){
		int cons=0;
		for(int j=0;j<10;j++){
			if(str[i]==v[j]){
				vowels+=1;
				break;
			}else if(cons==9){
				consonants+=1;
			}
			cons+=1;
		}
//		printf("%d ",cons);
		
	}
	printf(" \t\t\n Total count of vowels : %d \n Total count of consonants : %d",vowels,consonants);
}