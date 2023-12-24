// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30764
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Card Card;

struct Card {
    char suit;
    size_t suitOrder;
    size_t value;
};

int Cmp(const void *a, const void *b) {
    if (((const Card *)a)->suitOrder > ((const Card *)b)->suitOrder) {
        return 1;
    } else if (((const Card *)a)->suitOrder < ((const Card *)b)->suitOrder) {
        return -1;
    } else {
        if (((const Card *)a)->value > ((const Card *)b)->value) {
            return 1;
        } else if (((const Card *)a)->value < ((const Card *)b)->value) {
            return -1;
        } else {
            return 0;
        }
    }
}

int main(void) {
    size_t stackCnt = 0;
    scanf("%zu\n", &stackCnt);

    for (size_t i = 0; i < stackCnt; i++) {
        Card cards[52];
        memset(cards, 0, sizeof(cards));
        size_t cardCnt = 0;
        char tmp = 0;
        do {
            scanf("%c%zu%c", &cards[cardCnt].suit, &cards[cardCnt].value, &tmp);
            switch (cards[cardCnt].suit) {
                case 'C':
                    cards[cardCnt].suitOrder = 1;
                    break;
                case 'D':
                    cards[cardCnt].suitOrder = 2;
                    break;
                case 'H':
                    cards[cardCnt].suitOrder = 3;
                    break;
                case 'S':
                    cards[cardCnt].suitOrder = 4;
                    break;
                default:
                    break;
            }
            cardCnt++;
        } while (tmp != '\n');
        qsort(cards, cardCnt, sizeof(Card), Cmp);

        for (int j = (int)cardCnt - 1; j >= 0; j--) {
            printf("%c%zu", cards[j].suit, cards[j].value);
            // if (j == 0 && i != stackCnt - 1) {
            //     printf("\n");
            // } else if (j != 0 || i != stackCnt - 1) {
            //     printf(" ");
            // }
            if (j == 0) {
                printf("\n");
            } else if (j != 0) {
                printf(" ");
            }
        }
    }
}
