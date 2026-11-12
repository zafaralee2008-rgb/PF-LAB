#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your marks out of 100\n");
    scanf("%f", &marks);
    if (marks < 0 && marks > 100)
    {
        printf("Invalid marks entered\n");
    }
    else if (marks <= 100 && marks >= 90)
    {
        printf("Grade'A+'\n");
          printf("Result:Pass\n");
    }
    else if (marks < 90 && marks >= 80)
       
    {
        printf("Grade'A'\n");
          printf("Result:Pass\n");
    }
 else if (marks < 80 && marks >= 70)
    {
        printf("Grade 'B'\n");
          printf("Result:Pass\n");
    }
    else if (marks < 70 && marks >= 60)
    {
        printf("Grade 'C'\n");
          printf("Result:Pass\n");
    }
    else if (marks < 60 && marks >= 50)
    {
        printf("Grade 'D'\n");
         printf("Result:Pass\n");
    }
    else
    {
        printf("Grade 'F'\n");
        printf("Result:Fail\n");
    }

    return 0;
}
