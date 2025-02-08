#include <stdio.h>

void printx(void)
{
	int i;
	int j;
	int size = 11;
	char c;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			/*
			if (i == j || i + j == (size - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			*/
			if (i == j || i + j == (size - 1))
				c = '*';
			else
				c = ' ';
			printf("%c", c);
		}
		printf("\n");
	}

}

int main(void)
{
	int i;
	int j;
	int num;
	int isPrime;
	int count = 0;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);
	for (i = 2; i <= num; i++)
	{
		isPrime = 1;
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime == 1)
		{
			printf("%5d", i);
			count++;
			if (count % 5 == 0)
			{
				printf("\n");
				
			}
		}
	}
}