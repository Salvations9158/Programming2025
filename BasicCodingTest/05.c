//5. �� ���� n���� m���� 1�� �����ϸ鼭 ���ڸ� ���� ����� ����ϴ� �Լ� (n�� m ����)
#include <stdio.h>

void sum(int n, int m);

int main()
{
    sum(1, 10); //������ ���� ����
    return 0;
}

void sum(int n, int m)
{
    int total = 0;
    int Cn = n;
    int Cm = m;

    for (int i = 0; i <= m - n; i++)
    {
        total = total + Cn + Cm; 

        Cn++;
        Cm++;
    }

    printf("���: %d\n", total);
}