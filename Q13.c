#include <stdio.h>
int main() {
	int amt, total;
	printf("Input the amount: ");
	scanf("%d",&amt);
	
	total=amt/2000;
	printf("There are \n%d Note(s) of 2000.00\n",total);
	amt=amt-(total*2000);
	
    total=amt/500;
	printf("%d Note(s) of 500.00\n",total);
	amt=amt-(total*500);
	
	total=amt/200;
	printf("%d Note(s) of 200.00\n",total);
	amt=amt-(total*200);
	
	total=amt/100;
	printf("%d Note(s) of 100.00\n", total);
	amt = amt-(total*100);
	
	total =amt/50;
	printf("%d Note(s) of 50.00\n", total);
	
	amt = amt-(total*50);
	total =amt/20;
	printf("%d Note(s) of 20.00\n", total);
	
	amt = amt-(total*20);
	total =amt/10;
	printf("%d Note(s) of 10.00\n", total);
	
	amt = amt-(total*10);
	total =amt/5;
	printf("%d Note(s) of 5.00\n", total);
	
	amt = amt-(total*5);
	total =amt/2;
	printf("%d Note(s) of 2.00\n", total);
	
	amt = amt-(total*2);
	total =amt/1;
	printf("%d Note(s) of 1.00\n", total);
	
	return 0;
}
