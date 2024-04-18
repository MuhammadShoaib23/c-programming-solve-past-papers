#include<stdio.h>
int main()
{
	int marks[] = {44,39,57,67,87,91,70,68,89,60};
	int sum=0;
	float average;
	
	for(int i=0; i<10; i++)
	{
	sum += marks[i];	
	}
	average = (float)sum/10;
	printf("sum = %d\nAverage = %.2f",sum,average);
	
	return 0;
}
