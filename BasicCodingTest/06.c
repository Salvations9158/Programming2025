//6. �ϳ��� ������ ������ �־����� �� �ڸ��� �������� ���� ��ȯ�ϴ� �Լ��� �ۼ�(��: 274 �Է�-- > 2 + 7 + 4 = 13 ��ȯ)
#include <stdio.h>

int C();

int main(void)
{
    printf("�� �ڸ� ��: %d\n", C());
    return 0;
}

int C()
{
    int num = 0;
    int total = 0;

    printf("������ �Է� ");
    scanf_s("%d", &num);

    while (num > 0)
    {
        total += num % 10; // 10���� ���� ���� �������� total�� ����
        num /= 10; //�̹� ����� �ڸ���(�� ���ڸ�) ���ֱ�
    }
    return total;
}