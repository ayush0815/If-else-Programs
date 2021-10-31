#include <stdio.h>
int main()
{
    float BP,HRA,DA,GS;
    printf("enter the basic pay of the employee in INR\n");
    scanf("%f",&BP);
    if(BP<10000.0)
    {
    HRA=BP*0.2;
    DA=BP*0.8;
    }
else if (BP<20000.0)
{
    HRA=BP*2.25;
    DA=BP*0.9;
}
else 
{
    HRA=BP*0.3;
    DA=BP*0.95;
}
GS=BP+HRA+DA;
printf("the gross salary of the employee is INR %.2f",GS);

return 0;
}