#include<stdio.h>
int main()
{
	double weight;
	double height;
	double BMI;
	printf("몸무게(kg) : ");
	scanf("%lf", &weight);
	printf("키(cm) : ");
	scanf("%lf", &height);
	printf("%lf, %lf\n", weight, height);
	height /= 100;
	BMI = weight / (height * height);
	printf("%lf\n", BMI);
	printf((20<=BMI && BMI<=25) ? "표준입니다." : "체중관리가 필요합니다.");
	if (20 <= BMI && BMI <= 25)
	{
		printf("표준입니다.");
	}
	else
	{
		printf("체중관리가 필요합니다.");
	}
	return 0;
}