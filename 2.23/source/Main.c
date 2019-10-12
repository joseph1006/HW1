#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[3];
	int i, j, a;

	printf("Enter three intergers, and I will tell you\n");
	printf("the biggest and the smallest integer");
	scanf_s("%d %d %d", &num[0], &num[1], &num[2]);

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			if (num[i] < num[i + 1])
			{
				a = num[i];
				num[i] = num[i + 1];
				num[i + 1] = a;
			}
		}
	}

	printf("the biggest integer is:%d\n", num[0]);
	printf("the smallest integer is:%d", num[2]);
	system("pause");
	return 0;
}