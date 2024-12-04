//Write a C program to create a file, write a string into it, close the file, thenopen the file again to read and display its contents.

#include <stdio.h>

int main(){
	
	FILE *fptr;
	
//	fptr=fopen("demo.txt","w");
//	fputs("Hello bikash",fptr);
	
//	fptr=fopen("demo.txt","a");
//	fputs("Hello bikash",fptr);	


	fptr=fopen("demo.txt","r");
	char data[30];
	while(fgets(data,30,fptr) != NULL){
		printf("\t\t\n %s",data);
	}
	
	
	fclose;
	
	
}