//7. ���ڿ��� �ϳ��� ���ڸ� �޾� ���ڿ����� �� ���ڰ� ��ġ�� ��� ã�� �ֿܼ� ����ϰ� �� ������ ��ȯ�ϴ� �Լ� (��: Hello, l -> 2,3 ����ϰ� 2�� ��ȯ)
#include <stdio.h>
#include <string.h>

void in();
int FindChar(const char* text, char fchar);

int main()
{
    in();
    return 0;
}

void in()
{
    char Mystring[100];
    char Cfind;

    printf("���ڿ��� �Է��ϼ���: ");
    scanf_s("%s", Mystring, 20);

    printf("ã�� ���ڸ� �Է��ϼ���: ");
    scanf_s(" %c", &Cfind, 20);

    int count = FindChar(Mystring, Cfind);

    printf("\n�� '%c'�� ������ %d�� �Դϴ�.\n", Cfind, count);
}

int FindChar(const char* text, char fchar)
{
    int count = 0;
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        if (text[i] == fchar)
        {
            printf("%d\n", i);
            count++;
        }
    }
    return count;
}