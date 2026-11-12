#include <stdio.h>
int main()
{
    float average;
    int matches, fitness_failed;

    printf("Enter batting average\n ");
    scanf("%f", &average);
    printf("Enter matches played\n ");
    scanf("%d", &matches);
    printf("Fitness failure status 1:failed  0:passed  \n ");
    scanf("%d", &fitness_failed);

    if (matches < 5)
    {
        printf("Rejected - Insufficient Matches\n");
    }
    else if (average >= 35 && matches >= 10)
    {
        printf("Selected\n");
    }
    else if (average >= 25 && average <= 34.99 && matches >= 20)
    {
        if (fitness_failed == 1)
        {
            printf("Rejected - Fitness\n");
        }
        else
        {
            printf("Selected (Experience Quota)\n");
        }
    }
    else
    {
        printf("Not Selected\n");
    }

    return 0;
}