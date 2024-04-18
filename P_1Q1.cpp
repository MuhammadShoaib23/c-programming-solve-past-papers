#include<stdio.h>
char convert(char uppercase)
{
	if(uppercase >= 'A' && uppercase <= 'Z')
	{
		return (char)(uppercase +('a'-'A'));
	}
	else
	{
		return uppercase;
	}
}
int main()
{
	char result = convert('A');
	printf("Converted character : %c\n",result);
	
	return 0;
}
