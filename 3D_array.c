/*
PURITY TAIKU
CT100/G/26152/25
A 3D Array displaying total numbers of occupied rooms across all branches 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS   5
#define ROOMS    10

int main() {
    int chain[BRANCHES][FLOORS][ROOMS];
    int total_occupied = 0;

    // Seed random number generator
    srand(time(0));

    // 1. Assign random occupancy (0 or 1)
    for (int b = 0; b < BRANCHES; b++) {
        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS; r++) {
                chain[b][f][r] = rand() % 2;  // 0 or 1
            }
        }
    }

    // 2. Count total occupied rooms
    for (int b = 0; b < BRANCHES; b++) {
        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS; r++) {
                if (chain[b][f][r] == 1) {
                    total_occupied++;
                }
            
            }
           } 
          }
    printf("Total number of occupied rooms across all branches: %d\n", total_occupied);
    printf("Total rooms in the hotel: %d\n", BRANCHES * FLOORS * ROOMS);

    // Optional: Print full occupancy map
    printf("\n--- Occupancy Map (1=Occupied, 0=Vacant) ---\n");
    for (int b = 0; b < BRANCHES; b++) {
        printf("Branch %d:\n", b);
        for (int f = 0; f < FLOORS; f++) {
            printf("  Floor %d: ", f);
            for (int r = 0; r < ROOMS; r++) {
                printf("%d ", chain[b][f][r]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}