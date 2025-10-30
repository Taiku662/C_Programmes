/*
PURITY TAIKU
CT100/G/26152/25
DESCRIPTION:A 2D Array For room occupancy
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int Floors,Rooms;
int occupancy [5][10];
int i,j;
int occupied=0,vacant=0;

    
    for ( Floors = 0; Floors < 5; Floors++) {
        for ( Rooms = 0; Rooms < 10; Rooms++) {
            occupancy[Floors][Rooms] = rand() % 2; 
        }
    }
    printf("Room Occupancy 1=occupied,0=vacant \n");
    
    for ( Floors = 0; Floors < 5; Floors++) {
    	
        for ( Rooms = 0; Rooms < 10; Rooms++) {
   
            if (occupancy[Floors][Rooms] == 1)
                occupied++;
            else
                vacant++;
        }
        }
    printf("TOTAL OCCUPIED ROOMS:%d \n",occupied);
    printf("TOTAL VACANT ROOMS :%d \n",vacant);
    
	return 0;
}