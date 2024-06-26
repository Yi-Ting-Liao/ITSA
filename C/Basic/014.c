// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30766
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char string[10000];
    while (scanf("%s", string) != EOF) {
        size_t len = strlen(string);
        bool isReverse = true;
        for (size_t i = 0; i < len; i++) {
            if (string[i] != string[len - i - 1]) {
                isReverse = false;
                break;
            }
        }
        if (isReverse) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
