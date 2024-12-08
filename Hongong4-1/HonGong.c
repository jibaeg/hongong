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
	return 0;

}