#include<stdio.h>
int main()
{
	char sprinkles;
	float total= 0.0;
	printf(" do you want sprinkles? ");
	scanf("%c",&sprinkles);
	if(sprinkles=='y'||sprinkles=='Y')
	total=total+0.75;
	printf("total cost is %.2f",total);
	
	
}
