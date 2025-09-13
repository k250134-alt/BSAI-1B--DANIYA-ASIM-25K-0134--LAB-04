#include<stdio.h>
int main()
{
	int day;
	float total;
	printf(" Enter total: ");
	scanf("%f",&total);
	printf("What day is today? choose between (1-7):");
	scanf("%d",&day);
    if(day==6||day==7)
    {
    	total=total*0.20;
    	printf("Congratulations you've got discount and now\n Your total is $%.2f",total);
	}
	else 
	{
		printf("No discount");
	}
}
