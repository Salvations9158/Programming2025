//1. 두 수 정수 a,b를 입력받아 다음 계산을 하는 함수 a + b, a << b, a* b를 계산하여 콘솔에 출력하고 후 그 중 가장 큰 값을 반환
#include <stdio.h>

int CL();

int main()
{
	printf("가장 큰 값은 %d입니다.", CL());
	return 0;
}

int CL()
{
	int a, b = 0;

	int result1 = 0;
	int result2 = 0;
	int result3 = 0;

	printf("a값? ");
	scanf_s("%d", &a);

	printf("a값? ");
	scanf_s("%d", &b);

	result1 = a + b;
	result2 = a << b; //2진수 표현으로 계산 후 10진수로 변환
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

