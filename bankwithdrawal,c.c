/*
PURITY TAIKU
CT100/G/26152/25
A while loop program displaying balanceafter withdrawal in a bank ATM
*/

#include <stdio.h>

int main()
{
int amount;
	int balance=2000;
	printf("Your balance is %d \n",balance);
	
	while(balance>=0)
	{
	printf("enter the amount you withdraw \n");	
	scanf("%d", &amount);
	balance-=amount ;
	
	printf("new balance:= %d ",balance);
	}
	printf("INSUFFICIENT BALANCE");
	return 0;
}