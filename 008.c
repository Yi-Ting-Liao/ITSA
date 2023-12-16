
// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30752
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;
    while (scanf("%d", &number) != EOF) {
        bool isPrime = true;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
