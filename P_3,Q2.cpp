#include<stdio.h>
int main()
{
	float amount,rate_of_dollar = 300, convertedAmount;
	int choice;
	
	printf("\nEnter the amount = ");
	scanf("%f",&amount);
	printf("\nChoose Conversion : \n");
	printf("Dollar to Rupees press : 1\nRupees to Dollar press : 2\n");
	printf("Enter your choice of Conversion = ");
	scanf("%d",&choice);
	if(choice == 1)
	{
		convertedAmount = amount*300;
		printf("Converted amount = %.2fpkr\n",convertedAmount);
	}
	else if(choice == 2)
	{
		convertedAmount = amount/rate_of_dollar;
		printf("Converted amount = %.2f$\n",convertedAmount);
	}
	else
	{
		printf("Your Choise is invalid please run again\n");
	}
	
	return 0;
}
