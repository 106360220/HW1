#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b,BMI;
	printf("�п�J�z���魫(����)�Ψ���(����)�G");
	scanf("%f%f",&a,&b);
	BMI = a / (b*b);
	printf("BMI VALUES:\t%.2f\n",BMI);
	printf("Underweight:\tless than 18.5\n");
	printf("Normal:\t\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t\t30 or greater\n");
	system("pause");
	return 0;
}