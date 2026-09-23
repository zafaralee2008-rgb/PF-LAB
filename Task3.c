#include <stdio.h>
int main()
{
    int length,width,area;
    printf("Enter the lenght and width of rectangle\n");
    scanf("%d %d",&length ,&width);
    area = length * width;
    printf("The area of rectangle is %d\n",area);
    return 0;
}
