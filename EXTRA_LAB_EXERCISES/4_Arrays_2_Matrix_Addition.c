//LAB EXERCISE 2: Matrix Addition
//Write a C program that accepts two 2x2 matrices from the user and adds them. Display theresultant matrix. ?
//Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.


#include <stdio.h>

int main(){
//Write a C program that accepts two 2x2 matrices from the user and adds them. Display theresultant matrix.	
	int arr1[2][2],arr2[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("\t\t\n Enter %dst row %dst value : ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("\t\t\n Enter %dst row %dst value : ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			printf(" %d",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
		
	}
	
//	Extend the program to work with 3x3 matrices and matrix multiplication.

		
//	int arr1[3][3]={1,2,3,4,5,6,7,8,9},arr2[3][3]={9,8,7,6,5,4,3,2,1},arr3[3][3];
//	
//
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			arr3[i][j]=0;
//			for(int k=0;k<3;k++){
//				arr3[i][j]+=arr1[i][k]*arr2[k][j];
//			}
//		}
//		
//	}
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf(" %d ",arr3[i][j]);
//		}
//		printf("\n");
//	}
//
//}