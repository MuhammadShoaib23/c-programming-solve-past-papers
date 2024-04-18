#include<stdio.h>
int main()
{
	int base, exponent;
	
	printf("\nEnter value for Base = ");
	scanf("%d",&base);
	printf("\nEnter value for Exponent = ");
	scanf("%d",&exponent);
	int result = 1;
	for(int i = 0; i<exponent; i++)
	{
		result *=base;
	}
	printf("\n%d to the power %d is = %d",base,exponent,result);	
	return 0;
}
