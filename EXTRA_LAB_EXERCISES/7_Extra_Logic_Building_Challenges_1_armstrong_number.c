//Lab Challenge 1: Armstrong Number
//Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3). 
//?Challenge: Write a program to find all Armstrong numbers between 1 and 1000.


#include <stdio.h>

void Armstrong_find(int num);
void Armstrong_check(int num);

int main(){
	
	while(1){
		char str;
		printf("\t\t\n do you want to find all armstrong numbers than press g or c to check and any key to exit:   ");
		scanf(" %c",&str);
		if(str=='g'){
			int num;
			printf("\t\t\n Enter number range to find armstrong number:  ");
			scanf("%d",&num);
			Armstrong_find(num);
		}else if (str=='c'){
			int num;
			printf("\t\t\n Enter number to check its armstrong number or not :  ");
			scanf("%d",&num);
			Armstrong_check(num);
		}else{
			printf("\t\t\n invalid key");
			break;
		}
	}
	
	
	
	
	
	

}


void Armstrong_find(int num){
	for(int i=1;i<=num;i++){
		int num1=i,total=0;
//		printf("%d ",num1);
		while(num1!=0){
			int temp=num1%10;
			total+=temp*temp*temp;
			num1/=10;
			
		}
		
		if(i==total){
			printf("\t\t\n %d is Armstrong number.",i);
		}
	}
}




void Armstrong_check(int num){
	int num1=num,total=0;
	
	while(num1!=0){
		int temp=num1%10;
		total+=temp*temp*temp;
		num1/=10;
	}
	if(num==total){
			printf("\t\t\n %d is Armstrong number.",num);
	}else{
		printf("\t\t\n %d is not Armstrong number.",num);
	}
	
}









