#include <stdio.h>
int main()
{
    float price1, price2, price3;
    int qty1, qty2, qty3;
    float cost1, cost2, cost3, total_bill;
    printf("Enter the quantity and prize of product 1 \n");
    scanf("%d %f", &qty1, &price1);
    printf("Enter the quantity and prize of product 2 \n");
    scanf("%d %f", &qty2, &price2);
    printf("Enter the quantity and prize of product 3 \n");
    scanf("%d %f", &qty3, &price3);

    cost1 = qty1 * price1;
    cost2 = qty2 * price2;
    cost3 = qty3 * price3;
    total_bill = cost1 + cost2 + cost3;

    printf("The cost of product 1 is : %f \n", cost1);
    printf("The cost of product 2 is : %f \n", cost2);
    printf("The cost of product 3 is : %f \n", cost3);
    printf("The total bill is : %f ", total_bill);
    return 0;
}
