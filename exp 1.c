#include <stdio.h>
int sum(int arr[],int size);
int main()
{
    int array[]={10,20,30,40,50};
    printf("\nMemory Address [%p]",(void *)array);
    int size = 5;
    printf("\n Sum of all elements in array [%d]",sum(array,size));
    return 0;
}
int sum(int arr[],int size)
