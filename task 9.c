#include<stdio.h>
int main()
{
	int payment_method;
	float total;
	printf(" Enter total: ");
	scanf(" %f",&total);
		printf("Choose a payment method\n1. cash\n 2.card");
	scanf("%d",&payment_method);
	if(payment_method==2)
	{
		total=total+0.50;
		printf("Total= $%.2f",total);
	}
}
