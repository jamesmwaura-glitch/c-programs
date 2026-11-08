#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    int occupancy[FLOORS][ROOMS_PER_FLOOR];
    
    
    srand(time(NULL));


    for (int i = 0; i < FLOORS; i++) {
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }

    
    printf("--- Hotel Branch Room Occupancy Report ---\n\n");

    int total_occupied = 0;
    int total_vacant = 0;

    for (int i = 0; i < FLOORS; i++) {
        int floor_occupied = 0;
        int floor_vacant = 0;

        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            if (occupancy[i][j] == 1) {
                floor_occupied++;
            } else {
                floor_vacant++;
            }
        }

        total_occupied += floor_occupied;
        total_vacant += floor_vacant;

        printf("Floor %d Summary:\n", i + 1);
        printf("  - Occupied Rooms : %d\n", floor_occupied);
        printf("  - Vacant Rooms   : %d\n", floor_vacant);
        printf("------------------------------------------\n");
    }


    printf("Total Occupied Rooms across Branch : %d\n", total_occupied);
    printf("Total Vacant Rooms across Branch   : %d\n", total_vacant);

    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


















