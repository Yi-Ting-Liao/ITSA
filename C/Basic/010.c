// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t a = 0;
    size_t b = 0;
    while (scanf("%zu %zu", &a, &b) != EOF) {
        while (a > 0 && b > 0) {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }
        if (a == 0)
            printf("%zu\n", b);
        else
            printf("%zu\n", a);
    }
}
