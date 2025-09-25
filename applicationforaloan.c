 //simple c program
/*
Name: Purity Taiku 
Reg no:CT100/G/26152\25
Description loan application

*/  
#include<stdio.h>
int main(){
	
	//declare the age and annual income
	int age;
	float annualincome;
	
	//prompt the user to enter the age
	printf("enter your age\n");
	scanf("%d", & age);
	
	//prompt the user to enter the annual incpme
	printf("enter your annual income\n");
	scanf("%f", & annualincome);
	
	if(age >= 21 && annualincome >= 21000){
		printf("Congratulations. You qualify for a loan.\n");
	}
	else{
		printf("Unfortunately, we are unable to offer you a loan at this time.");
	}
	
	return 0;
}