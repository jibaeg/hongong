#include<stdio.h>
int main()
{
	double weight;
	double height;
	double BMI;
	printf("������(kg) : ");
	scanf("%lf", &weight);
	printf("Ű(cm) : ");
	scanf("%lf", &height);
	printf("%lf, %lf\n", weight, height);
	height /= 100;
	BMI = weight / (height * height);
	printf("%lf\n", BMI);
	printf((20<=BMI && BMI<=25) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");
	if (20 <= BMI && BMI <= 25)
	{
		printf("ǥ���Դϴ�.");
	}
	else
	{
		printf("ü�߰����� �ʿ��մϴ�.");
	}
	return 0;
}