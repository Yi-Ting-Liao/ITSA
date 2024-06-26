// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15904

#include <cstdlib>
#include <iostream>

int main() {
    size_t hourStart, minuteStart, hourEnd, minuteEnd = 0;
    std::cin >> hourStart >> minuteStart >> hourEnd >> minuteEnd;
    size_t hourDiff        = hourEnd - hourStart;
    size_t minuteDiff      = minuteEnd - minuteStart;
    size_t totalMinuteDiff = hourDiff * 60 + minuteDiff;
    if (totalMinuteDiff <= 120)
        std::cout << totalMinuteDiff / 30 * 30 << std::endl;
    else if (totalMinuteDiff <= 240)
        std::cout << 4 * 30 + (totalMinuteDiff - 120) / 30 * 40 << std::endl;
    else
        std::cout << 4 * 30 + 4 * 40 + (totalMinuteDiff - 240) / 30 * 60 << std::endl;
    return 0;
}
