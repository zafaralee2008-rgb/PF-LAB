#include <stdio.h>
int main()
{
    float distance,base_fare=0.0,total_fare,surcharge;
    int hour;
    printf("Enter hour of days between 0-23\n");
    scanf(" %d", &hour);

    printf("Enter the distance travelled in kilometer \n");
    scanf("%f", &distance);

    if (distance>0)
    {
        base_fare=50;
       total_fare=base_fare+distance*22-22;
    
    if (hour<6 || hour>22)
    {   surcharge=40;
    }}
    else
    {
        printf("Invlaid Distance entered \n");

    }
    total_fare=total_fare+surcharge;
    printf("The total fare is %.2f\n",total_fare);
    
    return 0;
}
