//
/*
yepLoan qualification
Name: Taiku Purity
Reg No:CT100/G/26152/25
Description: Loan qualification 
*/

//main
#include<stdio.h>
int main(){
	
	//declare the age and annual income
	int age;
	float annual_income;
	
	//prompt the user to enter the age
	printf("enter your age\n");
	scanf("%d", & age);
	
	//prompt the user to enter the annual incpme
	printf("enter your annual income\n");
	scanf("%f", & annual_income);
	
	if(age >= 21 && annual_income >= 21000){
		printf("coongratulations. You qualify for a loan.\n");
	}
	else{
		printf("unfortunately, we are unable to offer you a loan at this time.\n");
	}
	
	return 0;
}
