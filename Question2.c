#include <stdio.h>
int main()
{
    int fine,late_days;
printf("Enter the number of late days\n");
scanf(" %d", &late_days);
if (late_days == 0)
{
    printf("No Fine \n");
}
else if (late_days >=1 || late_days <= 5 )
{
    printf("Fine: Rs. 50\n");
}
else if (late_days >= 6 || late_days <= 10 )
{
  printf("Fine: Rs. 100\n");   
}
else 
{
    printf("Fine: Rs. 200 \n");
}

return 0;
}