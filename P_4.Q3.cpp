#include<stdio.h>
#include"prime.h"

/*#ifndef PRIME_H
#define PRIME_H
int isprime(int number)
{
	if(number<2 &&number>200)
	return 0;
	for(int i=2; i*i<=number; i++)
	{
		if(number%i==0)
		return 0;
	}
	return 1;
}

#endif*/
int main()
{
	int number;
	
	printf("Enter a number b/w 2 to 200 = ");
	scanf("%d",&number);
	
	if(number>=2 && number<200)
	{
		int result = isprime(number);
		if(result==1)
		{
			printf("The given number %d is prime",number);
		}
		else
		{
			printf("The given number %d is not a prime",number);
		}
	}
	else
	{
		printf("Your number is invalid for this program");
	}
	return 0;
}
