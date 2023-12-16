// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
#include <stdbool.h>
#include <stdio.h>

int main() {
    size_t number = 0;
    while (scanf("%zu", &number) != EOF) {
        size_t answer = 0;
        for (size_t i = 1; i <= number; i++) {
            if (i % 3 == 0)
                answer += i;
        }
        printf("%zu\n", answer);
    }
}
