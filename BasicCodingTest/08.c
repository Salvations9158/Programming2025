//8. 두 개의 자연수를 입력받아 그 두 수 사이의 홀수만을 더해서 반환하는 함수 (단, 그 두 수도 포함)
#include <stdio.h>

int SumOdd();

int main(void) {
    printf("홀수 합: %d\n", SumOdd());
    return 0;
}

int SumOdd() 
{
    int num1 = 0;
    int num2 = 0;

    printf("첫번째 정수 ");
    scanf_s("%d", &num1);

    printf("두번째 정수 ");
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
