#include <stdio.h>

int main(void)
{
	/*{
		int a;

		scanf("%d", &a);
		printf("�Էµ� �� : %d\n", a);
	}*/
	//{
	//	int age;
	//	double height;

	//	printf("���̿� Ű�� �Է��ϼ��� :");
	//	scanf(" %d%lf", &age, &height);
	//	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height);
	//}
	{
		char grade;
		char name[20];

		printf("�����Է� : ");
		scanf("%c", &grade);
		printf("�̸� �Է� : ");
		scanf("%s", name);
		printf("%s�� ������ %c�Դϴ�.\n", name, grade);
	}

	return 0;
}