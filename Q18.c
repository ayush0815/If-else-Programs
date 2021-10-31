#include <stdio.h>
int main()
{ 
float P,C,M,B,CS, Per;
printf("enter the marks obtained in Physics\n");
scanf("%f",&P);
printf("enter the marks obtained in Chemistry\n");
scanf("%f",&C);
printf("enter the marks obtained in Maths\n");
scanf("%f",&M);
printf("enter the marks obtained in Biology\n");
scanf("%f",&B);
printf("enter the marks obtained in Computer\n");
scanf("%f",&CS);
Per=((P+C+M+B+CS)/500.0)*100.0;
if(Per>=90.0)
{
printf("Grade A");
}
else if(Per>=80.0)
{
printf("Grade B");
}
else if(Per>=70.0)
{ 
printf("Grade C");
}
else if (Per>=60.0)
{
printf("Grade D");
}
else if (Per>=40.0)
{
printf("Grade E");
}
else if (Per<=40.0)
{
printf("Grade F");
}
return 0;
}