/*
PURITY TAIKU
CT100/G/26152/25
DESCRITION:A 1D Array Recording Weekly Revenues
*/
#include <stdio.h>

int main() {
    float revenue[7];  
    float totalRevenue = 0.0;
    float Average_Revenue;
    int i;

    // Input daily revenue
    printf("Enter weekly revenue\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d Ksh\t ", i + 1);
        scanf("%f", &revenue[i]);
        
        // Validate input 
        while (revenue[i] < 0) {
            printf("Revenue cannot be negative. Enter again for Day Ksh %d \t", i + 1);
            scanf("%f", &revenue[i]);
        }
        
        totalRevenue += revenue[i]; 
    }

    // Calculate average daily revenue
    Average_Revenue = totalRevenue / 7;

 
    printf("\nWeekly Revenue Report\n");
    printf("----------------------\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: Ksh %.2f\n", i + 1, revenue[i]);
    }
    printf("\nTotal Weekly Revenue: Ksh%.2f\n", totalRevenue);
    printf("Average Daily Revenue: Ksh%.2f\n", Average_Revenue);

    return 0;
}