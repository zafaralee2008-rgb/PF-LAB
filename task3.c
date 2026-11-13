#include <stdio.h>
int main()
{
    int branch1[3] = {15000, 23000, 32000};
    int branch2[4] = {12000, 21000, 27000, 35000};
    int *branch[2];
    int size[2] = {3, 4};
    int i, j, total;

    branch[0] = branch1;
    branch[1] = branch2;

    for (i = 0; i < 2; i++)
    {
        total = 0;
        printf("Branch %d\n", i + 1);

        for (j = 0; j < size[i]; j++)
        {
            printf("Customer %d: %d (address: %p)\n", j + 1, *(branch[i] + j), (void *)(branch[i] + j));
            total = total + *(branch[i] + j);
        }

        printf("Total balance of Branch %d: %d\n\n", i + 1, total);
    }

    return 0;
}