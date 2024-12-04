//Write a C program that uses the break statement to stop printing numbers
//when it reaches 5. Modify the program to skip printing the number 3 usingthecontinue statement.


#include <stdio.h>

int main(){
	
	for(int i=0; i<=10; i++){
		
		if (i==3){
			continue;
//			printf("\t\t\n %d",i);
			
		}else if (i==5){
//			printf("\t\t\n %d",i);
			break;
		}
		printf("\t\t\n %d",i);
	}
}