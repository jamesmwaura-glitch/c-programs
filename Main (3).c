#include <stdio.h>

int main(void){
   float celsius;
   float fahrenheit;
   
printf("Temperature in fahrenheit:");
scanf("%f",&fahrenheit);

celsius=(fahrenheit-32.0)*5/9;

printf("%.0f\n",celsius);
return 0;
}






