#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "myBank.h"


int main()
{
	char TavUser;
	do{
	printf(" Please choose a transaction type: \n O-Open Account \n B-Balance Inquiry \n D-Deposit \n W-Withdrawal \n C-Close Account \n I-Interest \n P-Print \n E-Exit \n\n");
	
	
	//scanf(" %c", &TavUser);
	
	if (scanf(" %c", &TavUser) == false)
        {
            printf("Invalid Input \n");
        }
			
		else{
		if (TavUser == 'O') {
			double cash;
			printf("Please enter amount for deposit: \n");
			scanf(" %lf", &cash);
			OpenAccount(cash);
		}
		if (TavUser == 'B') {
			int balnace;
			printf("what is your num account? \n");
			scanf(" %d", &balnace);
			BalanceSummery(balnace);
		}
		if (TavUser == 'D') {
			int balnace;
			printf("what is your num account? \n");
			scanf(" %d", &balnace);
			double cash;
			Deposit(balnace, cash);

		}
		//if user enter 'W'
		if (TavUser == 'W') {
			int balnace;
			printf("what is your num account? \n");
			scanf(" %d", &balnace);
			double cash;
			Withdraw(balnace, cash);
			
			
		}

		if (TavUser == 'C')
		{
			int numAcc;
			printf("what is your num account? \n");
			scanf(" %d", &numAcc);
			Close(numAcc);
		}

		if (TavUser == 'I')
		{
			double rate;
			printf("what is the rate? \n");
			scanf(" %lf", &rate);
			IterestRate(rate);
		}

		if (TavUser == 'P')
		{
			PrintAll();
		}
		
		if(TavUser == 'E'){
			CloseAllacc();
				}
	}
	}while(TavUser != 'E');
	
	return 0;
}

