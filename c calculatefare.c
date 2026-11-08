#include <stdio.h>

int main(void) {

    int fare=50;
    int distance;
    int totalfare;
    
    printf("Enter the distance covered in KM :");
    scanf("%d",&distance);

if(distance>1){
    fare=50;

totalfare=distance*fare;
printf("Total amount of fare is :%d",totalfare); 
}
else if(distance<1){
    printf("Please enter a non-negative value!!");
}

return 0;
}

