/*
*/

#include <stdio.h>

//function prototype

float calculate_first_tier(int units);
float calculate_second_tier(int units);
float calculate_third_tier(int units);
float calculate_electric_bill(int units);
float totalbill;

int main()
{
int units;
printf("Enter the number of units  consumed: \t");
scanf("%d",& units);
totalbill=calculate_electric_bill(units);

printf("Total bill %.2f \n",calculate_electric_bill(units));

	return 0;
}

//Function to calculate bill for the first 100 units
float calculate_first_tier(int units)
{
return units * 10;	
}

//Function to calculate bill for the next 100 units
float calculate_second_tier(int units)
{
return units * 15;	
}

//Function to calculate bill for units above 200
float calculate_third_tier(int units)
{
return units * 20;	
}

//Main function to calculate total electric bill
float calculate_electric_bill (int units)
{
float bill= 0;

if (units<=100)	
	bill=units *10;

else if( units<=200)
bill=(100 * 10) +(units - 100)*15;

else
bill=(100 * 10)+(100*15)+(units - 200 )*20;

return bill;
}