#include <stdio.h>
int main()
{
    int status;
    float bill, discount, total_bill;
    printf("Enter the membership status \n");
    printf("1:member \n 0:non-member\n");
    scanf("%d", &status);
    printf("Enter the amount of bill\n");
    scanf(" %f", &bill);

    discount = 0;

    if (bill <= 500)
    {
        printf("No discount \n");
    }
    else if (bill> 500 && bill < 2000)
    {
        switch (status)
        {
        case 0:
            printf("Non-member\n Discount is given 5 percent \n");
            discount = 0.05 * bill;
            break;

        case 1:
            printf("Member \n Discount is given 10 percent \n");
            discount = 0.10 * bill;
            break;

        default:
            printf("Invalid membership status\n");
            return 1;
        }
    }
    else
    {
        switch (status)
        {
        case 0:
            printf("Non-member \n discount is given 8 percent \n");
            discount = 0.08 * bill;
            break;

        case 1:
            printf("Member \n discount is given 15 percent \n");
            discount = 0.15 * bill;
            break;

        default:
            printf("Invalid membership status\n");
            return 1;
        }
    }
    total_bill = bill - discount;
    printf("Discount given :%.2f \n", discount);
    printf("Total payable amount :%.2f\n", total_bill);
    return 0;
}
