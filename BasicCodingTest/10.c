//10. �й��� ���ڿ��� �־����� ���г⵵�� ������ ��ȯ�ϴ� �Լ�
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int Student();

int main(void) {
    int year = Student();
    printf("���г⵵�� %d�� �Դϴ�.\n", year);

    return 0;
}

int GetYear(const char* student_id) {
    char year_str[5]; 

    strncpy_s(year_str, sizeof(year_str), student_id, 4);

    return atoi(year_str);
}

int Student() {
    char student_id[20];

    printf("�й��� �Է��ϼ���: ");
    scanf_s("%s", student_id, 20);

    return GetYear(student_id);
}