#include<stdio.h>
int main()
{
	int i, fact=1,number;
	printf("Enter number = ");
	scanf("%d",&number);
	printf("\n%d = ",number);
	
	for(i=1; i<=number; i++)
	{
		fact = fact*i;
		
		for(int j =1; j<i; j++)
		{
			printf("x ");
			break;
		}
		
		printf("%d ",i);
	}
	printf("Factorial is = %d",fact);
	
	return 0;
}
