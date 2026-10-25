#include <stdio.h>

int main(void) {
    
    int units; 
    int rate;
    int totalbill;

printf("Enter the number of consumed units :");
scanf("%d",&units);

    if (units <= 100) {
        rate = 10;
    } else if (units <= 200) {
        rate = 15;
    } else {
        rate = 20;
    }

    totalbill = units * rate;
    printf("Total bill: %d\n", totalbill);
    return 0;
}