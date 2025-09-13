#include<stdio.h>
int main()
{
		int conetype;
		int scoops;
	float total=0.0;
		printf("How many scoops do you want? ");
	scanf("%d",&scoops);
	if(scoops==1)
	{
		total=total+2.00;
		printf("The total is $%.2f",total);
	}
	else if(scoops==2)
	{
		total=total+3.50;
		printf("The total is $%.2f",total);
	}
	else if(scoops==3)
	{
		total=total+4.50;
		printf("The total is $%.2f",total);
	}
	else
	{
		printf("Please see our multi-scoop options");
	}
	printf("\nWe have 2 cone types:\n 1.REGULAR CONE(+$0.50)\n 2.WAFFLE CONE(+$1.00)");
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

		if(scoops==3&&conetype==2)
	{
		total=total-0.70;
		printf("\nYou got a free topping and\ntotal= $%.2f",total);
	}
}
