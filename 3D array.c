#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    
    int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR];
    

    srand(time(NULL));

    
    for (int b = 0; b < BRANCHES; b++) {
        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
                chain[b][f][r] = rand() % 2;
            }
        }
    }

    printf("--- Hotel Chain Room Occupancy Report ---\n\n");

    int grand_total_occupied = 0;

    for (int b = 0; b < BRANCHES; b++) {
        int branch_occupied = 0;

        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
                if (chain[b][f][r] == 1) {
                    branch_occupied++;
                }
            }
        }

        grand_total_occupied += branch_occupied;
        printf("Branch %d Total Occupied Rooms: %d\n", b + 1, branch_occupied);
    }

    printf("-----------------------------------------\n");

    printf("Grand Total Occupied Rooms (All Branches): %d\n", grand_total_occupied);

    return 0;
}
















































