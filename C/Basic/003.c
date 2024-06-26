// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x, y = 0;
    while (scanf("%d %d", &x, &y) != EOF) {
        if (sqrt(x * x + y * y) <= 200)
            printf("inside\n");
        else
            printf("outside\n");
    }
}
