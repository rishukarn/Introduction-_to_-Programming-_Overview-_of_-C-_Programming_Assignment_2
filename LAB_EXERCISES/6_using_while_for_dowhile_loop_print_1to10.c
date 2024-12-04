N//Write a C program to print numbers from 1 to 10 using all three types of loops(while, for, do-while).


//using while loop..........




#include <stdio.h>
int main(){
	
	int n=1;
	
	while(n<=10){
		
		printf("\t\t\n %d",n);
		n++;
	}
}


/*
//using for loop..........

#include <stdio.h>
int main(){
	
	
	for(int i=1; i<=10; i++ ){
		printf("\t\t\n %d",i);
	}
}

*/

//using do-while loop............
#include <stdio.h>

int main(){
	
	int n=1;
	
	do{
		printf("\t\t\n %d",n);
		n++;
	}while(n<=10);
}












