#include <stdio.h>
#include <string.h>

struct patient{
    int patientID;
    char patientname[50];
    int age;
    float temperature;
    int numberofdaysadmitted;
};

int main(){

    int accommodationcost=2500;
    int totalaccommodationcost;

    struct patient patient1;

    printf("Enter your name: ");
    fgets(patient1.patientname, sizeof(patient1.patientname), stdin);

 printf("Enter your ID: ");
    scanf("%d", &patient1.patientID);

    printf("Enter your age: ");
    scanf("%d",&patient1.age);

    printf("Enter temperature: ");
    scanf("%f",&patient1.temperature);

    printf("Enter number of days admitted: ");
    scanf("%d",&patient1.numberofdaysadmitted);

    printf("\n%s",patient1.patientname);
    printf("%d\n",patient1.patientID);
    printf("%d\n",patient1.age);
    printf("%.2f\n",patient1.temperature);
    printf("%d\n",patient1.numberofdaysadmitted);

    totalaccommodationcost=accommodationcost*patient1.numberofdaysadmitted;

    printf("Total accomodation cost is: %d\n",totalaccommodationcost);

    return 0;
}
