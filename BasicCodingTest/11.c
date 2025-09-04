//11. 1. 이름, 나이, 전화번호로 구성된 연락처를 반복적으로 입력받아 저장하고 만약 이름이나 나이를 0을 입력하면 입력을 중단하고 입력받은 목록을 반환하는 함수와 입력 받은 연락처 목록을 받아 콘솔에 출력하는 함수 작성한 후 입력받아 출력하는 테스트 코드 작성
#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100 

typedef struct _info {
    char name[20];
    int age;
    char phone[20];
}info;

void GetPInfo();

int main(void) {
    GetPInfo();
    return 0;
}

void GetPInfo() {
    info ContactList[MAX_CONTACTS];
    int count = 0;

    memset(ContactList, 0, sizeof(ContactList));

    printf("연락처를 반복적으로 입력하세요.\n");
    printf("이름 또는 나이에 '0'을 입력하면 종료됩니다.\n\n");

    while (1) {
        if (count >= MAX_CONTACTS) {
            printf("최대 저장 개수에 도달하여 입력을 종료합니다.\n");
            break;
        }

        printf("이름: ");
        scanf_s("%s", ContactList[count].name, 20);

        if (strcmp(ContactList[count].name, "0") == 0) {
            printf("이름에 '0'이 입력되어 입력을 종료합니다.\n");
            break;
        }

        printf("나이: ");
        scanf_s("%d", &ContactList[count].age);

        if (ContactList[count].age == 0) {
            printf("나이에 0이 입력되어 입력을 종료합니다.\n");
            break;
        }

        printf("전화번호: ");
        scanf_s("%s", ContactList[count].phone, 20);

        count++;
    }

    printf("\n--- 입력된 연락처 목록 (%d개) ---\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d. 이름: %s, 나이: %d, 전화번호: %s\n", i + 1, ContactList[i].name, ContactList[i].age, ContactList[i].phone);
    }
}