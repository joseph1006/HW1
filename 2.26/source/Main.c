#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("Enter two integers,and I will tell you\n");
	printf("whether the first is a multiple of the second");
	scanf_s("%d %d", &num1, &num2);

	if (num1 % num2 == 0)
	{
		printf("the first is a multiple of the second");
	}
	else
	{
		printf("the first is not a multiple of the second");
	}
	system("pause");
	return 0;
}
