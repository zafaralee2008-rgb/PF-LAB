#include <stdio.h>

int main() {
    float amount, bonus_percent, bonus_amount, final_balance;
    int network_code, weekend_status;

    printf("Enter load amount\n ");
    scanf("%f", &amount);
    printf("Enter network code 1=Jazz, 2=Telenor, 3=Ufone \n ");
    scanf("%d", &network_code);
    printf("Enter weekend status 1=weekend, 0=weekday \n");
    scanf("%d", &weekend_status);

    if (amount < 100) 
    {
        bonus_percent = 0;
    } else
     {
        if (amount <= 499) {
     if (weekend_status == 1) {
      if (network_code == 3) {
                    bonus_percent = 5;
    } else {
                    bonus_percent = 10;
                }
 } else {
                bonus_percent = 5;
            }
 } else {
  if (network_code == 1 || weekend_status == 1) {
                bonus_percent = 20;
  } else {
                bonus_percent = 12;
            }
        }
    }

    bonus_amount = amount * (bonus_percent / 100);
    final_balance = amount + bonus_amount;

    printf("Bonus: %.2f\n", bonus_amount);
    printf("Final Loaded Balance: %.2f\n", final_balance);

    return 0;
}