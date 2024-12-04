//4. Arrays
//
//LAB EXERCISE 1: Maximum and Minimum in Array
//Write a C program that accepts 10 integers from the user and stores themin an array. Theprogram should then find and print the maximum and minimum values in the array. 
//Challenge: Extend the program to sort the array 

#include <stdio.h>

int main(){
	
	int arr[10];
	
	for(int i=0;i<10;i++){
		printf("\t\t\n Enter a %dst value: ",i+1);
		scanf("%d",&arr[i]);
	}
	
//	Maximum and Minimum in Array
	int temp=arr[0];
	for(int j=1;j<10;j++){
		if(temp<arr[j]){
			temp=arr[j];
		}
	}
	printf("\t\t\n The maximum value in array is : %d",temp);
	
	int temp2=arr[0];
	for(int j=1;j<10;j++){
		if(temp2>arr[j]){
			temp2=arr[j];
		}
	}
	printf("\t\t\n The mininum value in array is : %d \n",temp2);

//Challenge: Extend the program to sort the array 	
	int temp3;
	for(int k=0;k<10;k++){
		for(int l=k+1;l<10;l++){
			if(arr[k]>arr[l]){
				temp3=arr[k];
				arr[k]=arr[l];
				arr[l]=temp3;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("\t %d",arr[i]);
	}
}
