//1.“나는 OOO입니다” 형태로 나를 소개하는 함수를 작성하고 호출하여 실행되는 프로그램을 작성하기
#include <stdio.h>

void intro();

int main()
{
	intro();
	return 0;
}

// "나는 전민규입니다" 출력 함수
void intro()
{
	printf("나는 전민규입니다");
}