#include <stdio.h>
int main()
{
    int marks;
    float income;
    printf("Enter your marks from 100 \n");
    scanf(" %d", &marks); 
    printf(" Enter your family income\n"); 
     scanf(" %f", &income);  
    
    if (marks >= 80 || income < 50000)   
    {
       printf("Student is qualified for scholarship\n");
    }
    else{
        printf("Student is not qualified for scholarship\n");
    }
    
    return 0;
}

