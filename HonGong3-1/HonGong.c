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
	printf("���� a�ǰ� : %d\n", a);
	printf("���� b�ǰ� : %d\n", b);
	printf("���� c�ǰ� : %d\n", c);
	printf("���� da�ǰ� : %.1lf\n", da);
	printf("���� ch�ǰ� : %c\n", ch);


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

		printf("���� : %s\n", fruit);
		printf("������ : %s %s\n", fruit, "jam");
	}
	{
		int income = 0;
		double tax;
		const double tax_rate = 0.12;

		
		income = 456;
		tax = income * tax_rate;
		printf("������ : %.1lf�Դϴ�.\n", tax);
	}
	{
		int kor = 70, eng = 80, mat = 90;
		int tot = 0;

		tot = kor + eng + mat;
		printf("����:%d, ����:%d, ����:%d\n", kor, eng, mat);
		printf("����:%d", tot);

	}
	return 0;
}