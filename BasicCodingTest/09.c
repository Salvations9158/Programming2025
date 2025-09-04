//9. 두 개의 3x3 행렬을 입력받아 행렬덧셈 결과행렬을 반환하는 함수
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

    printf("첫 번째 3x3 행렬의 요소를 입력하세요:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("행렬1[%d][%d]: ", i, j);
            scanf_s("%d", &matrix1[i][j]);
        }
    }

    printf("\n두 번째 3x3 행렬의 요소를 입력하세요:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("행렬2[%d][%d]: ", i, j);
            scanf_s("%d", &matrix2[i][j]);
        }
    }

    AddMatrices(matrix1, matrix2, ResultMatrix);

    printf("\n행렬 덧셈 결과:\n");
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
