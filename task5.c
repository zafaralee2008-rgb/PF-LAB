#include <stdio.h>

int deposit(int balance, int amount)
{
    return balance + amount;
}

int withdraw(int balance, int amount)
{
    if (amount > balance)
    {
        printf("Insufficient balance\n");
        return balance;
    }
    return balance - amount;
}

int main()
{
    int (*operation)(int, int);
    int balance = 15000;
    int amount;

    printf("Current balance: %d\n", balance);
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    operation = deposit;
    balance = operation(balance, amount);
    printf("Balance after deposit: %d\n", balance);

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    operation = withdraw;
    balance = operation(balance, amount);
    printf("Balance after withdrawal: %d\n", balance);

    return 0;
}