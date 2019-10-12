#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w, h, bmi;
	printf("Enter your weight(kg) and height(cm),and I will tell you your BMI ");
	scanf_s("%f %f", &w, &h);

	bmi = (w / ((h / 100) * (h / 100)));

	printf("your BMI:%.2f , ", bmi);

	if (bmi < 18.5) {
		printf("Underweight\n");
	}
	if (bmi >= 18.5 && bmi < 24.9) {
		printf("Normal\n");
	}
	if (bmi >= 24.9 && bmi < 29.9) {
		printf("Overweight\n");
	}
	if (bmi > 29.9) {
		printf("Obese");
	}

	system("pause");
	return 0;
}
