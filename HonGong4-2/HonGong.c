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
	
	return 0;
}