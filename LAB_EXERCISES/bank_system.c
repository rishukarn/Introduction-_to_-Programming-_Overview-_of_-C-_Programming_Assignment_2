//Banking system


#include <stdio.h>

int main(){
	
	char account_holder_name[100];
	char account_type ,new_account,account_choice;
	int account_no,set_password,check_password,check_account;
	float account_blnc;
	
	
	while(1){
	
		printf("\t\t\n Open new Acoount Enter: N or Your have old Account Enter: O ! ");
		scanf(" %c",&new_account);	
		if(new_account=='N'){
			printf("\t\t\n Enter your Account no. : ");
			scanf("%d",&account_no);
			printf("\t\t\n Enter your Name. : ");
			scanf("%s",&account_holder_name);
			printf("\t\t\n Enter your Account type. : ");
			scanf(" %c",&account_type);
			printf("\t\t\n Enter your Account balance. : ");
			scanf("%f",&account_blnc);
			printf("\t\t\n Set your account password : ");
			scanf("%d",&set_password);
			printf("\t\t\n Your Account is successfully created.......")
		}else if(new_account=='O'){
			printf("\t\t\n Enter your Account no. : ");
			scanf("%d",&check_account);
			printf("\t\t\n Enter your account password : ");
			scanf("%d",&check_password);
			if(account_no==check_account && set_password==check_password){
				printf("\t\t\n ...........wellcome auth user..............");
				while(1){
					printf("\t\t\n choose B for balance_check, D for deposit_amount, W for withdraw_amount, C for account_details : ");
					scanf(" %c",&account_choice);
					if(account_choice=='B'){
						printf("\t\t\n Your Balance is  %.2f",account_blnc);
					}else if (account_choice=='D'){
						printf("\t\t\n Enter your Deposit amount: ");
						int n;
						scanf("%d",&n);
						account_blnc+= n;
						printf("\t\t\n Your Deposit is successfull : ");
						printf("\t\t\n Your balance is now : %.2f ",account_blnc);
					}else if (account_choice=='W'){
						printf("\t\t\n Enter your withdraw amount: ");
						int w;
						scanf("%d",&w);
						account_blnc-=w;
						printf("\t\t\n Your withdraw is successfull : ");
						printf("\t\t\n Your balance is now : %.2f ",account_blnc);
					}else if (account_choice=='C'){
						printf("\t\t\n ..............Account Details................ ");
						printf("\t\t\n Account Number : %d ",account_no);
						printf("\t\t\n Account Holder Name : %s ",account_holder_name);
						printf("\t\t\n Account type : %c ",account_type);
						printf("\t\t\n Account Balance : %.2f ",account_blnc);
					}else{
						printf("\t\t\n invalid choice...");
						break;
					}
				}
			}else{
				printf("\t\t\n Your not auth user please open new account or your password is wrong.......");
			}
			
			
		
		}else{
			printf("\t\t\n exit.......");
			break;
		}
	}
	
	
}