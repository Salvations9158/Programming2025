#include <stdio.h>

void test1();

int main()
{
	printf("Hello World!\n");

	return 0;
}

void test1()
{
	int age = 20;
	const double PI = 3.141592;
	char myname[128] = "전민규";
	int iarray[] = { 1, 2, 3,4 };

	age = age + 1;

	double r = 2; // 2m
	double area = PI * r * r; //반지름 r 인 원의 면적

	if ((age > 10) && (area > 5.0))
	{

	}
	else
	{

	}
}