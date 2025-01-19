#include<stdio.h>

int main()
{
	{
		int a = 10;
		if (a < 0)
		{
			a = -a;
		}

		if (a % 2 == 0)
		{
			a = 2;
		}
		else
		{
			a = 1;
		}
	}
	{
		double height = 179.5;
		double weight = 75.0;
		if (187.5 <= height && weight < 80)
		{
			printf("ok\n");
		}
		else
		{
			printf("cancel\n");
		}
	}
	return 0;
}
