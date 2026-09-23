//Write a C program that takes a student's marks and displays "Pass" if the marks are 50 or above; otherwise, display "Fail".

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks \n");
    scanf(" %d",&marks);

    if (marks >= 50)
    {
       printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}
