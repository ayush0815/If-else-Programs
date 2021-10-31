#include <stdio.h>
int main()
{ 
int a,b,c;
printf("Enter all three sides of a triangle\n");
scanf("%d %d %d", &a,&b,&c);

if(a==b&&b==c&&a==c)
{
printf("triangle is equilateral");
}
else if(a==b||a==c||b==c)
{
printf("triangle is isoscelees");
}
else
{
printf("triangle is scalene");
}
return 0;
}