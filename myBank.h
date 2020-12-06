#include "stdio.h"
#define sizeAccount 50
#ifndef MYBANK_H
#define MYBANK_H_

double arrAccount[sizeAccount][2]; //Size is 50 range - 901-950. 0 is close and 1 is open

void OpenAccount(double cash);
void BalanceSummery(int numAccount);
void Deposit(int numAccount, double cash);
void Withdraw(int numAccount, double cash);
void Close(int numAccount);
void IterestRate(double rate);
void PrintAll();
void CloseAllacc();
#endif
