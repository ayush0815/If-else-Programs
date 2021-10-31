#include <stdio.h>
#include <math.h>
int main()
{ 
int a,b,c,D,root1,root2, root3,root4,RP,IP;
printf("Enter the coefficients of the quadratic equation (ax^2+bx+c=0)\n");
scanf("%d %d %d", &a,&b,&c);
D=b*b-(4*a*c);

if(D>0)
{
root1=(-b+sqrt(D))/2*a;
root2=(-b-sqrt(D))/2*a;
printf("Roots are real and their values are:\nroot 1= %d\nroot 2= %d",root1,root2);
}
else if(D==0)
{
root3=root4=-b/2*a;
printf("roots are real and equal and their values are:\nroot 1= %d\nroot 2= %d",root3,root4);
}
else
{
RP=-b/2*a;
IP=(sqrt(D))/2*a;
printf("Roots are imaginary and their values are:\nReal Part= %d\nimaginary Part= %d",RP,IP);
}
return 0;
}