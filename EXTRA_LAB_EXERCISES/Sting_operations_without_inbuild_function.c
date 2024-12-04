//	Wap to make string operations.
//	-> To find the length
//	-> To reverse the string
//	-> To convert the string into reverse case. 
//	-> To count the space in the string. (e.g if(str1[i]==" "))
//	-> To check the string is palindrome or not. (e.r racecar)


#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[30]="racecar",reverse[30];
	int length=0,space=0;
	
	
//	-> To find the length
	for(int i=0;str1[i]!='\0';i++){
		
		length+=1;
	}
	printf("\t\t\n Length of string is : %d \n",length);
	
	
	//	-> To reverse the string
	printf("\t\t\n reverse string : ");
	for(int j=length-1;j>=0;j--){
		printf("%c",str1[j]);
	}
	
	//	-> To convert the string into reverse case.
	printf("\t\t\n string Upper case : ");
	for(int i=0; i<length;i++){
		int temp=str1[i];
		if(temp<97){
			printf("%c",str1[i]);
		}else{
			printf("%c",str1[i]-32);
		}
	}
	
	printf("\t\t\n string lower case : ");
	for(int i=0; i<length;i++){
		int temp=str1[i];
		if(temp>97){
			printf("%c",str1[i]);
		
		}else if(temp==32){
			printf("%c",str1[i]);
		}
		else{
			printf("%c",str1[i]+32);
		}
	}
	
	
	//	-> To count the space in the string. (e.g if(str1[i]==" "))
	for(int i=0;str1[i]!='\0';i++){	
		if(str1[i]==32){
			space+=1;
		}
	}
	printf("\t\t\n Total space in string : %d",space);

	
	
	
	//	-> To check the string is palindrome or not. (e.r racecar)
	for(int i=length-1;i>=0;i--){	
		reverse[length-i-1]=str1[i];
	}
//	printf("\t\t\n %s : %s",str1,reverse);
	if(stricmp(str1,reverse)==0){
		printf("\t\t\n This is palindrome string. ");
	}else{
		printf("\t\t\n This is not palindrome string. ");
	}
	
	
	
	
	
}