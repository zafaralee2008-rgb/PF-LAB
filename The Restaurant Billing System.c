#include <stdio.h>
int main()
{
    int meal_category, customer_type;
    float bill, service_charge, service_amount, discount_percent, discount_amount, final_amount;

    printf("Enter meal category 1:Fast Food 2:Desi Food 3:Chinese \n ");
    scanf("%d", &meal_category);
    printf("Enter bill amount\n ");
    scanf("%f", &bill);
    printf("Enter customer type :=Student 2:Regular \n ");
    scanf("%d", &customer_type);

    switch (meal_category)
    {
        case 1:
            service_charge = 5;
            break;
        case 2:
            service_charge = 8;
            break;
        case 3:
            service_charge = 10;
            break;
        default:
            printf("Invalid Selection\n");
            return 0;
    }

    if (customer_type != 1 && customer_type != 2)
    {
        printf("Invalid Selection\n");
        return 0;
    }

    service_amount = bill * (service_charge / 100);

    if (bill >= 1000)
    {
        if (customer_type == 1)
        {
            discount_percent = 15;
        }
        else
        {
            discount_percent = 10;
        }
    }
    else
    {
        if (customer_type == 1)
        {
            discount_percent = 5;
        }
        else
        {
            discount_percent = 0;
        }
    }

    discount_amount = bill * (discount_percent / 100);
    final_amount = bill + service_amount - discount_amount;

    printf("Service Charge: Rs %.2f\n", service_amount);
    printf("Discount: Rs %.2f\n", discount_amount);
    printf("Final Payable Amount: Rs %.2f\n", final_amount);

    return 0;
}