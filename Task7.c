#include <stdio.h>
int main()
{
    char name[30];
    char gender;
    int age;
    int marks;
    float cgpa;
    printf("Enter name: ");
    scanf("%s", name); // wrong %d
    printf("Enter age: ");
    scanf(" %d", &age); // wrong %f
    printf("Enter gender: ");
    scanf(" %c", &gender); // wrong %s
    printf("Enter marks: ");
    scanf(" %d", &marks); // wrong %f
    printf("Enter CGPA: ");
    scanf(" %f", &cgpa); // wrong %d
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);     // wrong %d
    printf("Age: %d\n", age);       // wrong %f
    printf("Gender: %c\n", gender); // wrong %s
    printf("Marks: %d\n", marks);   // wrong %f
    printf("CGPA: %f\n", cgpa);     // wrong %d
    return 0;
}