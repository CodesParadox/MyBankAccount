#include <stdio.h>
#include "myBank.h"
#define OPEN 1
#define CLOSE 0
double arrAccount[sizeAccount][2] = { 0 }; //Size is 50 range - 901-950. 0 is close and 1 is open
	   // if the user Enter 'O'
	   
	   
int i = 0; // point to the last used bank account 
int CountOfAcc = 0; // count how much bank accounts we have

void OpenAccount(double cash) {
	// arr size -50
	 //int size = sizeof(arrAccount)/sizeof(arrAccount[0]);
	
	while (i<sizeAccount && arrAccount[i][1] == OPEN) {
		i++;
	}
	if(CountOfAcc == sizeAccount){
		printf("The storage is full. We have no more place for registeration new accs\n");
	}
	else (i<50);
		arrAccount[i][0] = cash; //cash balance now init.
		arrAccount[i][1] = OPEN; //now the account is open
		i += 901;
		CountOfAcc++;
		printf("New account number is: %d \n", i);

	
}
// if the user Enter 'B'
void BalanceSummery(int numAccount) {
	//check if it's valid account
	if (numAccount>900 && numAccount<950) {
		int i = numAccount - 901;
		if (arrAccount[i][1] == OPEN) //check if it's open
			printf("The balance of account number is: %0.2lf \n", arrAccount[i][0]);
	}
	else {
		printf("Not in range 901-950 \n");

	}
}
void Deposit(int numAccount, double cash) {
	
	if (numAccount>900 && numAccount<950) {
		printf("how much cash you want to put? \n");
			scanf(" %lf", &cash);
		int i = numAccount - 901;
		if(cash<0){
		printf("Invalid Amount\n");
		}else{
		if (arrAccount[i][1] == OPEN) {//check if it's open
			arrAccount[i][0] += cash;
			printf("The balance now is: %0.2lf \n", arrAccount[i][0]);
		}
		}
	}else {
		printf("Not in range 901-950 \n");
}
}
void Withdraw(int numAccount, double cash) {
	if (numAccount>900 && numAccount<950) {
		printf("how much cash you want to withraw? \n");
			scanf(" %lf", &cash);
		int i = numAccount - 901;
		if(cash<0){
		printf("Invalid Amount\n");
		}else{
			if (arrAccount[i][1] == OPEN) {//check if it's open
			if (arrAccount[i][0] >= cash)
				arrAccount[i][0] -= cash;
				printf("The balance now is: %0.2lf \n", arrAccount[i][0]);
		}
			else {
				printf("no enough money for that... \n");
			
		}
		}
	}else {
		printf("Not in range 901-950 \n");
}
}

void Close(int numAccount) {

	if (numAccount > 900 && numAccount < 950) {
		if (arrAccount[numAccount - 901][1] == OPEN)
		{
			arrAccount[numAccount - 901][1] = CLOSE;
			CountOfAcc--;
			printf("Closed account number %d \n",numAccount);
		}
	}else {
		printf("Not in range 901-950 \n");
}
}
void IterestRate(double rate) {
	if(CountOfAcc !=0){
	int i = 0;
	for (i = 0; i < sizeAccount; i++)
	{
		double add = (rate/100)*arrAccount[i][0];
		arrAccount[i][0] += add;
	}
}else{
	printf("Can not find any open bank account.\n");
	}
}

void PrintAll() {
	if(CountOfAcc != 0){
	int i;
	for (i = 0; i < sizeAccount; i++)
	{
		if (arrAccount[i][1] == OPEN)
		{
			printf("The num account is: %d, The balance is: %0.2lf\n", i + 901, arrAccount[i][0]);
		}
	}
}	else{
	printf("Can not find any open bank account.\n");
	}
}

void CloseAllacc(){
		for(int i = 0; i < sizeAccount; i++){
			if(arrAccount[i][1] != CLOSE){
				arrAccount[i][0] = CLOSE;
				arrAccount[i][1] = 0;
				CountOfAcc--;
			}
		}
	printf("All the accounts in the bank are closed\n");
}




