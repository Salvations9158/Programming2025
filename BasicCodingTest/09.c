//9. �� ���� 3x3 ����� �Է¹޾� ��ĵ��� �������� ��ȯ�ϴ� �Լ�
#include <stdio.h>

void AddMatrices(int matrix1[3][3], int matrix2[3][3], int result_matrix[3][3]);
void in();

int main(void) {
    in();
    return 0;
}

void in()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int ResultMatrix[3][3];

    printf("ù ��° 3x3 ����� ��Ҹ� �Է��ϼ���:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("���1[%d][%d]: ", i, j);
            scanf_s("%d", &matrix1[i][j]);
        }
    }

    printf("\n�� ��° 3x3 ����� ��Ҹ� �Է��ϼ���:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("���2[%d][%d]: ", i, j);
            scanf_s("%d", &matrix2[i][j]);
        }
    }

    AddMatrices(matrix1, matrix2, ResultMatrix);

    printf("\n��� ���� ���:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ResultMatrix[i][j]);
        }
        printf("\n");
    }

}

void AddMatrices(int matrix1[3][3], int matrix2[3][3], int ResultMatrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ResultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
