#include <stdio.h>
int main()
{
    int number,sq_num,cube_num;
    printf("Enter the number \n");
    scanf(" %d", &number);

    sq_num= number*number;
    cube_num=number*number*number;
    printf("Number :%d\n Sqaure :%d\n Cube :%d\n",number,sq_num,cube_num);
    return 0;
}
