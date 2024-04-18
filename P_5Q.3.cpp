#include<stdio.h>
int factorial(int number)
{
	int fact = 1;
	for(int i = 1; i<=number; i++)
	{
		fact =fact*i;
		for(int j=1; j<i; j++)
		{
			printf("x ");
			break;
		}
		printf("%d ",i);
	}
	printf("\nFactorial = %d",fact);
	return 0;
}
int main()
{
	int number;
	printf("\nEnter your number to find its factorial = ");
	scanf("%d",&number);
	printf("\n%d = ",number);
	factorial(number);
	
	
	return 0;
}
