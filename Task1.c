#include <stdio.h>
int main()
{
    char name[14];
    int age;
    float height;
    char grade;
    printf("Enter your name \n");
    scanf(" %s",name);
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("Enter your height \n");
    scanf("%f",&height);
    printf("Enter your grade \n");
    scanf(" %c",&grade);
    printf("name :%s \n age:%d \n height:%f\n grade:%c\n",name,age,height,grade);
    return 0;    
}