//1. �� �� ���� a,b�� �Է¹޾� ���� ����� �ϴ� �Լ� a + b, a << b, a* b�� ����Ͽ� �ֿܼ� ����ϰ� �� �� �� ���� ū ���� ��ȯ
#include <stdio.h>

int CL();

int main()
{
	printf("���� ū ���� %d�Դϴ�.", CL());
	return 0;
}

int CL()
{
	int a, b = 0;

	int result1 = 0;
	int result2 = 0;
	int result3 = 0;

	printf("a��? ");
	scanf_s("%d", &a);

	printf("a��? ");
	scanf_s("%d", &b);

	result1 = a + b;
	result2 = a << b; //2���� ǥ������ ��� �� 10������ ��ȯ
	result3 = a * b;

	printf("a + b = %d\n", result1);
	printf("a << b = %d\n", result2);
	printf("a * b = %d\n", result3);

	if (result1 > result2)
	{
		if (result1 > result3)
		{
			return result1;
		}
	}
	else if (result2 > result3)
	{
		return result2;
	}
	else
	{
		return result3;
	}
}

