#include<stdio.h>
int main()
{
	int age;
	float total=0.0;
		printf(" Enter your age: ");
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
}
