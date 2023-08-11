#include <stdio.h>
int main() {
     int matrix1[3][3],matrix2[3][3];

     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
                matrix1[i][j]=i*3+j;
            }
       }
     printf("Matrix created using a nested for loop:\n");
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
            matrix2[i][j] = i + 3 + j + 9;
        }
    }

    int result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
