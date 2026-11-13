#include <stdio.h>
int main()
{
    int transactions[2][3] = {{120000, 150000, 180000}, {200000, 170000, 220000}};
    int (*p)[3] = transactions;
    int i, j, total;

    for (i = 0; i < 2; i++)
    {
        total = 0;
        printf("Branch %d (row address: %p)\n", i + 1, (void *)(p + i));

        for (j = 0; j < 3; j++)
        {
            printf("Month %d: %d\n", j + 1, *(*(p + i) + j));
            total = total + *(*(p + i) + j);
        }

        printf("Total transactions of Branch %d: %d\n\n", i + 1, total);
    }

    return 0;
}