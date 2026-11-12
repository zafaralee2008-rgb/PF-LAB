#include <stdio.h>
int main(int argc, char const *argv[])
{
    int capacity,current_level,remaining,time;
    float fill_rate,cost;
    printf("Enter the water tank capacity in litres\n");
    scanf("%d", &capacity);
    printf("Enter current water level in litres\n");
    scanf(" %d", &current_level);
    printf("Enter the motor water filling rate in litres per minutes \n");
    scanf(" %f", &fill_rate);
    if (current_level >= capacity)
    {
        printf("Tank is already filled\n");
    }
    remaining=capacity-current_level;
    time=remaining/fill_rate;
    cost = time*3.50;
    printf("Time required: %d\n",time);
    printf("Electricity cost:%.2f\n",cost);

    return 0;
}
