#include<stdio.h>
int main()
{
	int scoops;
	float total_of_1_scoop=2.00;
	float total_of_2_scoops=3.50;
	float total_of_3_scoops=4.50;
	printf("How many scoops do you want? ");
	scanf("%d",&scoops);
	if(scoops==1)
	{
		printf("Total number of scoops are %d\n and \nyour total is $%.2f",scoops,total_of_1_scoop);
	}
	else if(scoops==2)
	{
		printf("Total number of scoops are %d\n and \nyour total is $%.2f",scoops,total_of_2_scoops);
	}
		else if(scoops==3)
	{
		printf("Total number of scoops are %d\n and \nyour total is $%.2f",scoops,total_of_3_scoops);
	}
	else
	{
		printf(" Invalid number of scoops, please choose between (1-3) ");
	}
}
