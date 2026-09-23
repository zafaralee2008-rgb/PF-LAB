#include <stdio.h>
int main()
{
    int age;
    float temperature;
    double percentage;
    char grade;
    printf("Enter your age \n");
    scanf("%d", &age);
    printf("Enter the temperature \n");
    scanf("%f", &temperature);
    printf("Enter the percentage \n");
    scanf("%lf", &percentage);

    printf("Enter the grade \n");
    scanf(" %c", &grade);

    printf("The age is:%d \n", age);
    printf("The temperature is:%f \n ", temperature);
    printf("grade is :%c \n", grade);
    printf("Percentage  is :%lf \n", percentage);
    return 0;
}
