#include <stdio.h>
int main()
{ 
float CP,SP,P,L;
printf("enter the cost price of the product in INR\n");
scanf("%f",&CP);
printf("enter the selling price of the product in INR\n");
scanf("%f",&SP);
if(SP>CP)
{
P=SP-CP;
printf("You have earned the profit of INR %.2f",P);
}
else if(SP==CP)
{
printf("Neither you have earned the profit nor you have suffered any loss");
}
else
{ 
L=CP-SP;
printf("you have suffered the loss of INR %.2f",L);
}
return 0;
}