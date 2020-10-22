#include <stdio.h>
  
int main(void)
{
        int system, algorithm, network;
        float average;

        printf("Input the system programming, algortihm, and network score:");
        scanf("%d%d%d", &system, &algorithm, &network);	// Input three scores.

        average = (system + algorithm + network) / 3.0;	// Correct formula to get exact average.

        printf("The average of the three subjects is %2f.\n", average);	// print into two decimal places.

        return 0;

}

