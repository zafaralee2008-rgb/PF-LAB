#include <stdio.h>
int main() {
int age;//declare as integer
printf("Enter your age: ");
scanf("%d", &age); //wrong format specifier was used %f
printf("Your age is: %d\n", age); //wrong %f
return 0;
}