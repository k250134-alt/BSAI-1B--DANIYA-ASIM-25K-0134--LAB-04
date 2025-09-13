#include<stdio.h>
int main()
{
	int flavour, scoops, conetype, day, age, payment_method;
	float total=0.0;
	char sprinkles;
	//task 1
	printf("choose your flavour:\n 1.Vanilla\n 2.Strawberry\n 3.Chocolate\n");
	scanf("%d",&flavour);
	if(flavour==1)
	{
		printf("Vanilla");
	}
	else if(flavour==2)
	{
		printf("Strawberry");
	}
	else if(flavour==3)
	{
		printf("Chocolate");
	}
	else
	{
		printf("Invalid flavour");
	}
	//task 2 and 3
	printf("\nHow many scoops do you want? ");
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
	//task 4
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
	//task 5
	printf("\nWould you like to have sprinkles (Y/N)");
	scanf(" %c",&sprinkles);
	if(sprinkles=='y'||sprinkles=='Y')
	{
		total=total+0.70;
		printf("Your total is $%.2f",total);
	}
	//task 6
	printf("\nWhat day is today? choose between (1-7)");
	scanf("%d",&day);
    if(day==6||day==7)
    {
    	total=total*0.20;
    	printf("\nCongratulations you've got discount and now\n Your total is $%.2f",total);
	}
	else 
	{
		printf("No discount");
	}
	//task 7
	printf("\n Enter your age: ");
	scanf("%d",&age);
	if(age<=12)
	{
		total=total-1.00;
		printf(" you have got underage discount now\n Your total is $%.2f",total);
	}
	else
	{
		printf(" No discount");
	}
	//task 8
	if(scoops==3&&conetype==2)
	{
		total=total-0.70;
		printf("\nYou got a free topping and\ntotal= $%.2f",total);
	}
	//task 9
	printf("\nChoose a payment method\n1. cash\n 2.card");
	scanf("%d",&payment_method);
	if(payment_method==2)
	{
		total=total+0.50;
		printf("Total= $%.2f",total);
	}
	//task 10
	printf("\nFlavour= %d\n",flavour);
		printf("scoops= %d\n",scoops);
			printf("conetype= %d\n",conetype);
				printf("sprinkles= %c\n",sprinkles);
					printf("day= %d\n",day);
						printf("age= %d\n",age);
							printf("payment_method= %d\n",payment_method);
								printf("total= $%.2f",total);
		
	
			
	
}
