#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("Enter an integer, and I will tell you\n");
	printf("it's Odd or Even");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("it's Even");
	}
	if (a % 2 == 1)
	{
		printf("it's Odd");
	}

	system("pause");
	return 0;
}