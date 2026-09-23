#include <stdio.h>
int main()
{
    float temp_celsius,temp_fahrenheit;
   printf(" Enter the temperature in celsius \n");
   scanf(" %f", &temp_celsius);

   temp_fahrenheit = (temp_celsius * 9/5) + 32;

   printf("The temperature in fahrenheit is :%.2f\n",temp_fahrenheit);

    return 0;
}
