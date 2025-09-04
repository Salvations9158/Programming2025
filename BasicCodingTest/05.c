//5. 두 정수 n부터 m까지 1씩 증가하면서 숫자를 합한 결과를 출력하는 함수 (n과 m 포함)
#include <stdio.h>

void sum(int n, int m);

int main()
{
    sum(1, 10); //임의의 정수 지정
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

    printf("결과: %d\n", total);
}