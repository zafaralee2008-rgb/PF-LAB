#include <stdio.h>
int main()
{
    int balance[5] = {15000, 25000, 18000, 32000, 12000};
    int *p;
    int customer, amount;

    printf("Enter customer number (1-5): ");
    scanf("%d", &customer);

    if (customer < 1 || customer > 5)
    {
        printf("Invalid customer number\n");
        return 0;
    }

    p = &balance[customer - 1];

    printf("Balance of customer %d: %d\n", customer, *p);
    printf("Address of balance: %p\n", (void *)p);

    printf("Enter amount to add: ");
    scanf("%d", &amount);

    *p = *p + amount;

    printf("Updated balance of customer %d: %d\n", customer, *p);
    printf("Balance in array: %d\n", balance[customer - 1]);

    return 0;
}