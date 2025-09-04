//6. 하나의 십진수 정수가 주어지면 각 자리의 십진수의 합을 반환하는 함수를 작성(예: 274 입력-- > 2 + 7 + 4 = 13 반환)
#include <stdio.h>

int C();

int main(void)
{
    printf("각 자리 합: %d\n", C());
    return 0;
}

int C()
{
    int num = 0;
    int total = 0;

    printf("십진수 입력 ");
    scanf_s("%d", &num);

    while (num > 0)
    {
        total += num % 10; // 10으로 나눈 값의 나머지를 total에 저장
        num /= 10; //이미 계산한 자리수(맨 뒷자리) 없애기
    }
    return total;
}