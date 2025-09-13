#include<stdio.h>
int main()
{
	int scoop;
	float total= 2.00;
	printf("HOW MANY SCOOPS DO YOU WANT?:  ");
	scanf("%d",&scoop);
	if(scoop==1)
	{
		printf(" Your total is $.2f",total);
	}
	else if(scoop>1)
	{
		printf(" Please see our multi-scoop options.\n ");
	}

	else
	{
		printf(" Invalid scoop number ");
	}
	return 0;
}
