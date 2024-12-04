//LAB EXERCISE 3: Sum of Digits

//?Write a C program that takes an integer from the user and calculates the sumof its digits
//using a while loop. ? Challenge: Extend the program to reverse the digits of the number.


#include <stdio.h>

int main(){
	
	int num,sum=0;
	
	printf("\t\t\n Enter a number : ");
	scanf("%d",&num);
	//?Write a C program that takes an integer from the user and calculates the sumof its digits
	for(int i=1;i<=num;i++){
		sum+=i;
	}
	printf("\t\t\n sum of all number is: %d \n",sum);
	
	//using a while loop. ? Challenge: Extend the program to reverse the digits of the number.
	printf("\t\t\n reverse number is : ");
	while(sum!=0){
		int temp=sum%10;
		printf("%d",temp);
		sum/=10;
	}
	
}