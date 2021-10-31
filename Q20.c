






#include <stdio.h>
int main()
{   
float unit,bill,SC,TB;
printf("enter the units of electricity consumed\n");
scanf("%f",&unit);

if(unit<=50.0)
{
bill=unit*0.50;
}
else if(unit<=150.0)
{
bill=unit*0.75;
}
else if (unit<=250.0)
{
bill=unit*1.20;
}
else
{
bill=unit*1.50;
}
TB=bill+0.20;
printf("the total bill is INR %f",TB);
return 0;
}
