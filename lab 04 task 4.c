#include<stdio.h>
int main()
{
	int conetype;
	float total=0.0;
	printf("We have 2 cone types:\n 1.REGULAR CONE(+$0.50)\n 2.WAFFLE CONE(+$1.00)");
	scanf("%d",&conetype);
	if(conetype==1)
	{
		total=total+0.50;
		printf("Your total is $%.2f",total);
	}
	else if(conetype==2)
	{
		total=total+1.00;
		printf("Your total is $%.2f",total);
	}
	else
	{
		printf("Invalid conetype");
	}
}
