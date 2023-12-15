#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t hourStart, minuteStart, hourEnd, minuteEnd = 0;
    scanf("%zu %zu %zu %zu", &hourStart, &minuteStart, &hourEnd, &minuteEnd);
    size_t hourDiff = hourEnd - hourStart;
    size_t minuteDiff = minuteEnd - minuteStart;
    size_t totalMinuteDiff = hourDiff * 60 + minuteDiff;
    if (totalMinuteDiff <= 120)
        printf("%zu\n", totalMinuteDiff / 30 * 30);
    else if (totalMinuteDiff <= 240)
        printf("%zu\n", 4 * 30 + (totalMinuteDiff - 120) / 30 * 40);
    else
        printf("%zu\n", 4 * 30 + 4 * 40 + (totalMinuteDiff - 240) / 30 * 60);
}
