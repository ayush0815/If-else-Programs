#include <stdio.h>
int main()
{ 
int a;
printf("enter a number \n");
scanf("%d",&a);   
if (a>=0)
{
printf("%d is a positive number",a);
}
else
{
printf("%d is a negative number",a);
}
return 0;
}
