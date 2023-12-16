// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t month = 0;
    while (scanf("%zu", &month) != EOF) {
        switch (month) {
            case 1:
                printf("Winter\n");
                break;
            case 2:
                printf("Winter\n");
                break;
            case 3:
                printf("Spring\n");
                break;
            case 4:
                printf("Spring\n");
                break;
            case 5:
                printf("Spring\n");
                break;
            case 6:
                printf("Summer\n");
                break;
            case 7:
                printf("Summer\n");
                break;
            case 8:
                printf("Summer\n");
                break;
            case 9:
                printf("Autumn\n");
                break;
            case 10:
                printf("Autumn\n");
                break;
            case 11:
                printf("Autumn\n");
                break;
            case 12:
                printf("Winter\n");
                break;
            default:
                printf("\n");
                break;
        }

    }
}