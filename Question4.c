
#include <stdio.h>
int main()
{
    float lenght ,width,area,perimeter;
    printf("Enter the lenght and width of rectangle\n");
    scanf("%f %f", &lenght, &width);

    area = lenght * width;
    printf("The area of rectangle is %.2f \n",area);
    return 0;
    
}