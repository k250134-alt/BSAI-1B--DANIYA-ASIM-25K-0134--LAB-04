#include<stdio.h>
int main()
{
	char sprinkles;
	float total;
	printf("Enter total: ");
	scanf(" %f",&total);
	printf("do you want sprinkles? yes or no");
	scanf("\n%c",&sprinkles);
	if(sprinkles=='y'||sprinkles=='Y')
	{
		total=total+0.75;
	    printf("total cost is %.2f",total);
	}
}
	
	

