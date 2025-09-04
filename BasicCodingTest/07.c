//7. 문자열과 하나의 문자를 받아 문자열에서 그 문자가 위치를 모두 찾아 콘솔에 출력하고 그 갯수를 반환하는 함수 (예: Hello, l -> 2,3 출력하고 2를 반환)
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

    printf("문자열을 입력하세요: ");
    scanf_s("%s", Mystring, 20);

    printf("찾을 문자를 입력하세요: ");
    scanf_s(" %c", &Cfind, 20);

    int count = FindChar(Mystring, Cfind);

    printf("\n총 '%c'의 개수는 %d개 입니다.\n", Cfind, count);
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