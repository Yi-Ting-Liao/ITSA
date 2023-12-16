// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30755
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t inputCnt = 0;
    scanf("%zu", &inputCnt);
    for (size_t i = 0; i < inputCnt; i++) {
        char operator= 0;
        int real1 = 0, imaginary1 = 0, real2 = 0, imaginary2 = 0;
        scanf(" %c %d %d %d %d", &operator, & real1, &imaginary1, &real2, &imaginary2);
        switch (operator) {
            case '+':
                printf("%d %d\n", real1 + real2, imaginary1 + imaginary2);
                break;
            case '-':
                printf("%d %d\n", real1 - real2, imaginary1 - imaginary2);
                break;
            case '*':
                printf("%d %d\n", real1 * real2 - imaginary1 * imaginary2, real1 * imaginary2 + real2 * imaginary1);
                break;
            default:
                break;
        }
    }
}
