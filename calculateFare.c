/*
Purity Taiku
CT100/G/26152/25
A c function calculating fare*/

#include <stdio.h>

// Function to calculate fare based on distance traveled
int calculateFare(float distance);

int main()
{
float distance;


printf("ENTER THE DISTANCE YOU HAVE TRAVELLED IN KM :\n");
scanf("%f",&distance);

//function call

int fare=calculateFare(distance);

printf("Distance %.2f km  \n",distance);
printf("Total fare: Ksh %d \n",fare);

return 0;
	
}
 int calculateFare(float distance){

return (int)(50*distance);

}