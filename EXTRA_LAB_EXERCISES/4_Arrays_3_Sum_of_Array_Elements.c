//LAB EXERCISE 3: Sum of Array Elements
//? Write a C program that takes N numbers from the user and stores themin an array. Theprogram should then calculate and display the sum of all array elements. ? 
//Challenge: Modify the program to also find the average of 


#include <stdio.h>

int main(){
	
	int arr[5],sum=0;
	
	for(int i=0;i<5;i++){
		printf("\t\t\n Enter %dst element:  ",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("\t\t\n sum of all array elements is : %d",sum);
	printf("\t\t\n The average of sum : %d",sum/5);

}