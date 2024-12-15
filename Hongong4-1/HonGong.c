#include <stdio.h>

int main(void)
{
	{
		double apple;
		int banana;
		int orange;

		apple = 5.0 / 2.0;
		banana = 5 / 2;
		orange = 5 % 2;

		printf("apple : %.1lf\n", apple);
		printf("banana : %d\n", banana);
		printf("orange : %d\n", orange);
	}
	{
		int a = 5, b = 5;
		int pre, post;

		pre = (++a) * 3;
		post = (b++) * 3;

		printf("증감 연산 후 초기값 a =%d, b = %d\n", a, b);
		printf("전위형: (++a) * 3 =%d, 후위형 : (b++) * 3 =%d\n", pre, post);
	}
	{
		int a = 30;
		int res;

		res = (a > 10) && (a < 20);
		printf("(a > 10) && (a < 20) : %d\n", res);
		res = (a < 10) || (a > 20);
		printf("(a < 10) || (a > 20) : %d\n", res);
		res = !(a >= 30);
		printf("!(a >= 30) : %d\n", res);
	}
	{
		double a = 4.0, b = 1.2;

		printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
		printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
		printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
		printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
	}
	{
		int kor = 3, eng = 5, mat = 4;
		double kscore = 3.8, escore = 4.4, mscore = 3.9;
		int credits = kor + eng + mat;
		double grade = (kscore + escore + mscore) / 3.0;
		int res = (credits >= 10 && grade > 4.0);
		printf("%d", res);
	}

	return 0;

}