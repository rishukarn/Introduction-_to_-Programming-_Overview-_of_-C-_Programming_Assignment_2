//Lab Challenge 2: Pascal’s Triangle
// Write a C program that generates Pascal’s Triangle up to N rows using loops.
// Challenge: Implement the same program using a recursive function.




#include <stdio.h>

int pascal_recu(int i, int k);

void PascalTriangel(int row);

int main()
{
//    int rows = 5;
//
//    // outer loop for rows
//    for (int i = 1; i <= rows; i++) {
//
//        // inner loop 1 for leading white spaces
//        for (int j = 0; j < rows - i; j++) {
//            printf(" ");
//        }
//
//        int C = 1; // coefficient
//
//        // inner loop 2 for printing numbers
//        for (int k = 1; k <= i; k++) {
//            printf("%d ", C);
//            C = C * (i - k) / k;
//        }
//        printf("\n");
//    }
	int row;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &row);

    printf("Pascal's Triangle:\n");
    PascalTriangel(row);
    
}

int pascal_recu(int i, int k){
	if(k==0 || k==i){
		return 1;
	}
	return pascal_recu(i-1,k-1)+pascal_recu(i-1,k);
}
void PascalTriangel(int row){
	
	for (int i=0;i<row;i++){
		
		for(int j=1;j<row-i-1;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("%d ",pascal_recu(i,k));
		}
		printf("\n");
	}

}

