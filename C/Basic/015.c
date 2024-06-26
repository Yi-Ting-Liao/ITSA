// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30767
// Not completed yet
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char string[1000];
    size_t alphaCnt[30] = {0};
    char tmp;
    size_t wordCnt = 0;
    while (scanf("%c", &tmp) != EOF) {
        tmp = tolower(tmp);
        if (isalpha(tmp)) {
            
            wordCnt++;
        }
    }
}
