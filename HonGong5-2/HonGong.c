#include <stdio.h>

void TestSwitch()
{
	int rank = 2, m = 0;
	printf("등수를 입력해주세요 :");
	scanf("%d", &rank);

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m : %d\n", m);
}

int main(void)
{
	{
		int num1;
		int num2;
		char op;
		int res;
		printf("사칙연산 입력(정수) : ");
		scanf("%d%c%d", &num1, &op, &num2);
		switch(op)
		{
		case '+':
			res = num1 + num2;
			break;
		case '-':
			res = num1 - num2;
			break;
		case '*':
			res = num1 * num2;
			break;
		case '/':
			res = num1 / num2;
			break;
		default:
			res = 0;
			break;


		}
		printf("%d %c %d = %d", num1, op, num2, res);
	}
	return 0;
}
