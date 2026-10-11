#include <stdio.h>
int main (void){
float units,multiplication;

printf("Enter the number of water units consumed: ");
scanf("%f" ,&units);

if(units<=30){
    multiplication=units*20;
}
else if(units<=60){
    multiplication=units*25;
}
    else {
        multiplication=units*30;
    }
    printf("total bill of water consumed is: %.2f\n",multiplication);

    return 0;
}