#include <stdio.h>
int main()
{ 
int a,b,c;
printf("Enter all three angles of a triangle\n");
scanf("%d %d %d", &a,&b,&c);

if(a+b+c==180)
{
printf("triangle is valid");
}
else
{
printf("triangle is not valid");
}
return 0;
}