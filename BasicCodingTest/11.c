//11. 1. �̸�, ����, ��ȭ��ȣ�� ������ ����ó�� �ݺ������� �Է¹޾� �����ϰ� ���� �̸��̳� ���̸� 0�� �Է��ϸ� �Է��� �ߴ��ϰ� �Է¹��� ����� ��ȯ�ϴ� �Լ��� �Է� ���� ����ó ����� �޾� �ֿܼ� ����ϴ� �Լ� �ۼ��� �� �Է¹޾� ����ϴ� �׽�Ʈ �ڵ� �ۼ�
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

    printf("����ó�� �ݺ������� �Է��ϼ���.\n");
    printf("�̸� �Ǵ� ���̿� '0'�� �Է��ϸ� ����˴ϴ�.\n\n");

    while (1) {
        if (count >= MAX_CONTACTS) {
            printf("�ִ� ���� ������ �����Ͽ� �Է��� �����մϴ�.\n");
            break;
        }

        printf("�̸�: ");
        scanf_s("%s", ContactList[count].name, 20);

        if (strcmp(ContactList[count].name, "0") == 0) {
            printf("�̸��� '0'�� �ԷµǾ� �Է��� �����մϴ�.\n");
            break;
        }

        printf("����: ");
        scanf_s("%d", &ContactList[count].age);

        if (ContactList[count].age == 0) {
            printf("���̿� 0�� �ԷµǾ� �Է��� �����մϴ�.\n");
            break;
        }

        printf("��ȭ��ȣ: ");
        scanf_s("%s", ContactList[count].phone, 20);

        count++;
    }

    printf("\n--- �Էµ� ����ó ��� (%d��) ---\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d. �̸�: %s, ����: %d, ��ȭ��ȣ: %s\n", i + 1, ContactList[i].name, ContactList[i].age, ContactList[i].phone);
    }
}