#include <stdio.h>

int main(void)
{
	{
		int a = 20, b = 3;
		double res;

		res = ((double)a) / ((double)b);
		printf("a =%d, b = %d\n", a, b);
		printf("a/b의 결과 : %.1lf\n", res);

		a = (int)res;
		printf("(int) %.1lf의 결과 : %d\n", res, a);
	}
	{
		int a = 10, b = 20;
		int res = 2;

		a += 20;
		res *= b + 10;
		printf("a =%d, b =%d\n", a, b);
		printf("res = %d\n", res);
	}
	{
		int a = 10, b = 20, res;
		res = (a > b) ? a : b;
		printf("큰 값 : %d\n", res);
	}
	{
		int a = 10;
		int b = 12;

		printf("a & b : %d\n", a & b);
		printf("a ^ b : %d\n", a ^ b);
		printf("a | b : %d\n", a | b);
		printf("~a : %d\n", ~a);
		printf("a << 1 : %d\n", a << 1);
		printf("a >> 2 : %d\n", a >> 2);
	}
	return 0;
}