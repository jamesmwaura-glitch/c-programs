#include <stdio.h>
int main(void){
    int days[7];
    int i;
    int totalweeklyrevenue=0;
    float averagedailyrevenue;
    
    for(i=0;i<7;i++){
printf("Enter revenue for day %d: ",i+1);
scanf("%d",&days[i]);
    }
    for(i=0;i<7;i++){
totalweeklyrevenue +=days[i];
printf("Total weekly revenue: %d\n",totalweeklyrevenue);
    }
averagedailyrevenue=totalweeklyrevenue/7.0;
printf("Average daily revenue: %.0f",averagedailyrevenue);
    
    return 0;
}
