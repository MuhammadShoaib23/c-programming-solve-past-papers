#include<stdio.h>
#include<math.h>
int main()
{
	int base, exponent;
	printf("\nEnter value for Base = ");
	scanf("%d",&base);
	printf("\nEnter value for Exponent = ");
	scanf("%d",&exponent);
	
	printf("\n%d to the power %d is = %.2f",base, exponent, pow(base,exponent));
	
	return 0;
}
