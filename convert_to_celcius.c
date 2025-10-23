/*
PURITY TAIKU
CT100/G/26152/25
A Function converting fahrenhei to degrees
*/

#include <stdio.h>
//converting Fahrenheit into Celsius
double convert_to_celsius(double Fahrenheit);

int main()
{
	double Fahrenheit;
	double celsius;
	
	printf("Enter temperature in Fahrenheit \t");
	scanf("%lf",&Fahrenheit);
	
	celsius=convert_to_celsius(Fahrenheit);
	
	printf("%.2fF = %.2fC ",Fahrenheit ,celsius);
	return 0;
}
double convert_to_celsius(double Fahrenheit){
	return(Fahrenheit-32)*5/9;
	}