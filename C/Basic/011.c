// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t col, row;
    while (scanf("%zu %zu", &col, &row) != EOF) {
        int(*arr)[row] = malloc(sizeof(int[col][row]));
        for (size_t i = 0; i < col; i++) {
            for (size_t j = 0; j < row; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
        // print reversed array
        for (size_t i = 0; i < row; i++) {
            for (size_t j = 0; j < col; j++) {
                printf("%d%c", arr[j][i], j == col - 1 ? '\n' : ' ');
            }
        }
        free(arr);
    }
}
