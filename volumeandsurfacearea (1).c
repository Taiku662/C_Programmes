//simple c program
/*
Purity Taiku 
Reg no:CT100/G/26152/25
Description:VOLUME AND SURFACE AREA
*/

#include <stdio.h>

int main () {
	//variable declaration

	float pie, radius ,height , volume, surface_area;
	
     
    //prompt the user to enter radius
   printf(" Enter radius: ");
    scanf("%f", &radius);
    
    //prompt the user to enter height
    printf("\n Enter height: ");
    scanf("%f", &height); 
    
    pie = 3.142;
    
    //compute volume and surface_area
    volume = pie * radius * radius * height;
    surface_area = (2 * pie * radius * radius) + (2 * pie * radius * height);
    
    //display volume
    printf("\n Volume is %.2f ",volume);
    printf("surface_area is %.2f \n", surface_area);
    
    return 0;
}