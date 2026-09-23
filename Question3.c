#include <stdio.h>
#include <string.h>

int main()
{
    char name[45], letter;
    printf("Enter your full name ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    puts("You entered name:");
    puts(name);
    printf("\nEnter a single letter: ");
    scanf("%c", &letter);

    printf("Single character entered: %c\n", letter);

    return 0;
}
