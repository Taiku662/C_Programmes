/*
PURITY TAIKU
CT100/G/26152/25
DESCRIPTION:WATER BILL CALCULATOR
*/

#include<stdio.h>

int main()
{

float units_consumed ,water_bill;

printf("enter the units_consumed \t");	
scanf("%f", &units_consumed);

printf("Enter the water_bill \t");
scanf("%f", &water_bill);

if(units_consumed>=0 && units_consumed<=30){
water_bill=	20*units_consumed;
}

else if(units_consumed>=31 && units_consumed<=60)
{
water_bill=25*units_consumed;
}
 else if(units_consumed>60)
 {
water_bill=30*units_consumed;	 
 }
 
 printf("The water_bill is Ksh. %.2f \n" ,water_bill);
 
	return 0;
}