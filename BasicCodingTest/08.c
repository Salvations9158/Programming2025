//8. �� ���� �ڿ����� �Է¹޾� �� �� �� ������ Ȧ������ ���ؼ� ��ȯ�ϴ� �Լ� (��, �� �� ���� ����)
#include <stdio.h>

int SumOdd();

int main(void) {
    printf("Ȧ�� ��: %d\n", SumOdd());
    return 0;
}

int SumOdd() 
{
    int num1 = 0;
    int num2 = 0;

    printf("ù��° ���� ");
    scanf_s("%d", &num1);

    printf("�ι�° ���� ");
    scanf_s("%d", &num2);

    int total = 0;
    int start = (num1 < num2) ? num1 : num2;
    int end = (num1 > num2) ? num1 : num2;

    for (int i = start; i <= end; i++) 
    {
        if (i % 2 != 0) 
        {
            total += i;
        }
    }
    return total;
}
