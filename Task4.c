#include <stdio.h>
int main()
{
    float radius,pi=3.142;
    double circumference,area;
    printf("Enter the radius of the circle \n");
    scanf("%f",&radius);
    circumference =2*pi*radius;
    area = pi*radius*radius;
    printf("The circumference of circle is :%lf \n",circumference);
    printf("The area of circle is :%lf\n",area); 
    return 0;
}
