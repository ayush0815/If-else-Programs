#include <stdio.h>
int main()
{ 
char a;
printf("enter an alphabet \n");
scanf("%c",&a);   
if (a>='a'&&a<='z')
{
printf("%c is lower case alphabet (small letter)",a);
}
else
{
printf("%c is an upper case alphabet (capital letter)",a);
}
return 0;
}
