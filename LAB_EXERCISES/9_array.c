//Write a C program that stores 5 integers in a one-dimensional array andprintsthem. Extend this to handle a two-dimensional array (3x3 matrix) and
//calculate the sum of all elements.

#include <stdio.h>

int main(){
	int arr[5]={44,33,22,55,88},sum=0;
//	
//	for(int i=0;i<5;i++){
//		printf("\t\t\n %dst index value is : %d",i+1,arr[i]);
//	}
	for(int i=0;i<5;i++){
		sum+=arr[i];
	}
	printf("\t\t\n total sum of array is : %d ",sum);



//	int arr1[3][3]={1,2,3,4,5,6,7,8,9},arr2[3][3]={9,8,7,6,5,4,3,2,1},arr3[3][3];
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			arr3[i][j]=arr1[i][j]+arr2[i][j];
//		}
//	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("\t %d",arr3[i][j]);
//		}
//		printf("\n");
//	}
}