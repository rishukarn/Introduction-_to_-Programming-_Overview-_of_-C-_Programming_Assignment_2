//Write a C program that takes two strings from the user and concatenates themusing strcat(). Display the concatenated string and its length using
//strlen().


#include <stdio.h>
#include <string.h>
int main(){
	
	char str1[30],str2[30],str3[30];
	printf("\t\t\n Enter your 1st string: ");
	gets(str1);
	printf("\t\t\n Enter your 2nd string: ");
	gets(str2);
	
	strcpy(str3,strcat(str1,str2));
	printf("\t\t\n Two strings concatenates : %s \n length of string is : %d",str3,strlen(str3));
}
	