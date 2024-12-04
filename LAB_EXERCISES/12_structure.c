//Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of structures to store details of 3students and print them.

#include <stdio.h>
struct Student {
	char name[50];
	int roll;
	float marks;
}S[3];


int main(){
	
	for(int i=0;i<3;i++){
		printf("\t\t\n Enter %dst student name: ",i+1);
		scanf(" %s",&S[i].name);
		printf("\t\t\n Enter %dst student roll: ",i+1);
		scanf("%d",&S[i].roll);
		printf("\t\t\n Enter %dst student marks: ",i+1);
		scanf("%f",&S[i].marks);
	}
//	printf("%.2f",S[0].marks);
	
	for(int j=0;j<3;j++){
		printf("\t\t\n %dst student deatil \n student name is : %s \n student roll is : %d \n student marks is : %.2f ",j+1,S[j].name,S[j].roll,S[j].marks);
	}
}