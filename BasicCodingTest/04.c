//4. ���� 1���� �޾� ������, 2����, 8����, 16������ ����ϴ� �Լ�
#include <stdio.h>

void Conversion();
void Bn(int n);

int main()
{
	Conversion();
	return 0;
}

void Conversion()
{
	int number = 0;

	printf("��ȯ�� ���ڸ� �Է����ּ��� ");
	scanf_s("%d", &number);

	printf("10����: %d\n", number);
	printf("2����: ");
	Bn(number);
	printf("\n");
	printf("8����: %o\n", number);
	printf("16����: %x\n", number);

}


//2���� ��ȯ ����Լ�(���� �������� ȣ���� ����Ǹ� ���� ���� ���� �Լ� ���� ���ÿ��� ���������鼭 ���� ȣ��)
void Bn(int n)
{
	if (n == 0)
	{
		return;
	}

	Bn(n / 2);

	printf("%d", n % 2);
}