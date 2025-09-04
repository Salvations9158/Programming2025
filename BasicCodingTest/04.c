//4. 정수 1개를 받아 십진수, 2진수, 8진수, 16진수로 출력하는 함수
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

	printf("변환할 숫자를 입력해주세요 ");
	scanf_s("%d", &number);

	printf("10진수: %d\n", number);
	printf("2진수: ");
	Bn(number);
	printf("\n");
	printf("8진수: %o\n", number);
	printf("16진수: %x\n", number);

}


//2진수 변환 재귀함수(가장 마지막에 호툴이 종료되면 종료 조건 만난 함수 부터 스택에서 빠져나가면서 역순 호출)
void Bn(int n)
{
	if (n == 0)
	{
		return;
	}

	Bn(n / 2);

	printf("%d", n % 2);
}