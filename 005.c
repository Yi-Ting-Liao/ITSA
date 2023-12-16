// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15906
#include <stdio.h>
#include <stdlib.h>

int main() {
    int input = 0;
    while (scanf("%d", &input) != EOF) {
        // print the binary representation of input
        for (size_t i = 0; i < 8; i++) {
            printf("%d", (input >> (7 - i)) & 1);
        }
        printf("\n");
    }
}
