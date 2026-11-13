#include <stdio.h>

int calculateTotal(int *arr, int size)
{
    int i, total = 0;

    for (i = 0; i < size; i++)
    {
        total = total + *(arr + i);
    }

    return total;
}

int main()
{
    int branch1[3] = {15000, 23000, 32000};
    int branch2[4] = {12000, 21000, 27000, 35000};

    printf("Total balance of Branch 1: %d\n", calculateTotal(branch1, 3));
    printf("Total balance of Branch 2: %d\n", calculateTotal(branch2, 4));

    return 0;
}