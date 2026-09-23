#include <stdio.h>
int main() {
float radius, area;
printf("Enter radius: ");
scanf("%f", &radius); //wrong %d
area = 3.14 * radius * radius;
printf("Radius = %f\n", radius); //wrong %d
printf("Area = %f\n", area); //wrong %d
return 0;
}