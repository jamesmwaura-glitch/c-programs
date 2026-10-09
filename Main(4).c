#include <stdio.h>

float volume_of_cylinder(float radius, float height) {
    const float pi = 3.142f;
    return pi * radius * radius * height;
}

int main(void) {
    float radius ;
    float height ;
printf("Enter the radius: ");
scanf("%f",&radius);
printf("Enter the height: ");
scanf("%f",&height);

    printf("The volume is: %.2f\n", volume_of_cylinder(radius, height));
    return 0;
}
