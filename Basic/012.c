// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761
#include <stdio.h>
#include <stdlib.h>

size_t function(size_t n) {
    if (n == 0 || n == 1)
        return n + 1;
    else
        return function(n - 1) + function(n / 2);
}

int main(void) {
    size_t input;
    scanf("%zu", &input);

    printf("%zu\n", function(input));
}
