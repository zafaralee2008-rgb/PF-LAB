#include <stdio.h>

int main() {
    int overdue_days, book_type, priority_member;
    float fine = 0.0;

    printf("Enter overdue days\n");
    scanf("%d", &overdue_days);
    printf("Enter book type 1:Regular  2:Reference, 3=Rare \n ");
    scanf("%d", &book_type);
    printf("Priority member  1:yes 0:no\n ");
    scanf("%d", &priority_member);

    if (book_type == 1) {
     if (overdue_days <= 7) {
            fine = overdue_days * 5;
     } else {
            fine = (7 * 5) + (overdue_days - 7) * 10;
        }
     if (priority_member == 1) {
            fine = fine - (fine * 0.20);
        }
    } else if (book_type == 2) {
        fine = overdue_days * 15;
        if (priority_member == 1) {
            fine = fine - (fine * 0.20);
        }
    } else if (book_type == 3) {
        fine = overdue_days * 30;
        if (overdue_days > 10) {
            printf("Banned from Borrowing\n");
        }
    } else {
        printf("Invalid Book Type\n");
        return 0;
    }

    printf("Fine: Rs %.2f\n", fine);

    return 0;
}