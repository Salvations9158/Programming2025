#include <stdio.h>

struct info
{
	char name[24];
	int age;
	char phone[20];
};

int main()
{
	Q2();
	return 0;
}

void Q2()
{
	//1
	int num1 = 5;

	//2
	double num2 = 2.14;

	//3
	char hi[] = "Hello";
	int array[] = { 1, 2, 3, 4 };

	//4
	char strArr1[][7] = { "Apple", "Banana", "Cherry", "Durian" };
	//또는
	const char* strArr2[] = { "Apple", "Banana", "Cherry", "Durian" };

	//5
	#define Pi1 3.141592
	//또는
	const double Pi2 = 3.141592;

	//6
	struct info Myinfo = { "전민규", 20, "01054086071"};
}