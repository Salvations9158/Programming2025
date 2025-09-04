//10. 학번이 문자열로 주어지면 입학년도를 정수로 반환하는 함수
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int Student();

int main(void) {
    int year = Student();
    printf("입학년도는 %d년 입니다.\n", year);

    return 0;
}

int GetYear(const char* student_id) {
    char year_str[5]; 

    strncpy_s(year_str, sizeof(year_str), student_id, 4);

    return atoi(year_str);
}

int Student() {
    char student_id[20];

    printf("학번을 입력하세요: ");
    scanf_s("%s", student_id, 20);

    return GetYear(student_id);
}