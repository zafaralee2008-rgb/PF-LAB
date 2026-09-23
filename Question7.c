#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    float avg;
    printf("Enter three number to calculate their average \n");
    scanf(" %d %d %d", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("The average of three numbers is: %.2f \n", avg);
    return 0;
}
