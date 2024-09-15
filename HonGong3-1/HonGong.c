#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';
	printf("변수 a의값 : %d\n", a);
	printf("변수 b의값 : %d\n", b);
	printf("변수 c의값 : %d\n", c);
	printf("변수 da의값 : %.1lf\n", da);
	printf("변수 ch의값 : %c\n", ch);


	{
		unsigned int a;
		a = 4294967295;
		printf("%d\n", a);

		a = -1;
		printf("%u\n", a);
	}
	{
		char fruit[20] = "strawberry";
		//fruit = "banana";
		//fruit[0] = 'b';
		//fruit[1] = 'a';

		printf("딸기 : %s\n", fruit);
		printf("딸기잼 : %s %s\n", fruit, "jam");
	}
	{
		int income = 0;
		double tax;
		const double tax_rate = 0.12;

		
		income = 456;
		tax = income * tax_rate;
		printf("세금은 : %.1lf입니다.\n", tax);
	}
	{
		int kor = 70, eng = 80, mat = 90;
		int tot = 0;

		tot = kor + eng + mat;
		printf("국어:%d, 영어:%d, 수학:%d\n", kor, eng, mat);
		printf("총점:%d", tot);

	}
	return 0;
}