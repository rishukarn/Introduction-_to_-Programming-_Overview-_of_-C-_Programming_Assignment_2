//Food Billing System
#include <stdio.h>

int main(){
	
	int choice,total_amount=0,quantity;
	char reorder;
	
	
	do{
//		Display the menu
		printf("\t\t\n...........Menu.......... \n 1.Pizza \t price = 180rs/pcs \n 2.Burger \t price = 100rs/pcs \n 3.Dosa \t price = 120rs/pcs \n 4.Idli \t price = 50rs/pcs \n");
		
//		Take user choice from menu
		printf("\t\t\n Please Enter your choose......: ");
//		storing the choice value in variable
		scanf("%d",&choice); 
		
//		check  true choice case
		switch(choice){
			case 1:{
				printf("\t\t\n You have selected Pizza.");
				printf("\t\t\n Enter the quantity : ");
//				take food quantity and storing in variable 
				scanf("%d",&quantity);
//				muliply the price of food with quantity
				printf("\t\t\n Amount : %d",180*quantity);
//				add the total value in total_amount variable
				total_amount+=180*quantity;
				printf("\t\t\n Total Amount is = %d ",total_amount);
				break;
			}
			case 2:{
				printf("\t\t\n You have selected Burger.");
				printf("\t\t\n Enter the quantity : ");
				scanf("%d",&quantity);
				printf("\t\t\n Amount : %d",100*quantity);
				total_amount+=100*quantity;	
				printf("\t\t\n Total Amount is = %d ",total_amount);
				break;
			}
			case 3:{
				printf("\t\t\n You have selected Dosa.");
				printf("\t\t\n Enter the quantity : ");
				scanf("%d",&quantity);
				printf("\t\t\n Amount : %d",120*quantity);
				total_amount+=120*quantity;	
				printf("\t\t\n Total Amount is = %d ",total_amount);
				break;
			}
			case 4:{
				printf("\t\t\n You have selected Idli.");
				printf("\t\t\n Enter the quantity : ");
				scanf("%d",&temp);
				printf("\t\t\n Amount : %d",50*quantity);
				total_amount+=50*quantity;
				printf("\t\t\n Total Amount is = %d ",total_amount);
				break;
			}
			default:{
				printf("\t\t\n This item is not in our list.");
				break;
			}
		}
//		this line of code can execute again whene user give y or n then exit the code
		printf("\t\t\n Do you want place more orders ? y $ n :");
		scanf(" %c",&reorder);
	}while(reorder=='y');
	printf("\t\t\n .........Thank You......");
			
}
