#include <stdio.h>
int main()
{ 
int month;
printf("Enter month number (1-12): ");
scanf("%d", &month);

if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
{
printf("month has 31 days");
}
else if(month==2)
{
printf("month has 28 or 29 days depending on leap year");
}
else
{
printf("month has 30 days");
}
return 0;
}