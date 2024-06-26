// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=43056
#include <iostream>

int main() {
    // Input a 4-digit integer
    int input = 0;
    std::cin >> input;

    // Extract each digit
    int thousands = input / 1000;
    int hundreds  = (input / 100) % 10;
    int tens      = (input / 10) % 10;
    int units     = input % 10;

    // Output the digits in reverse order, separated by commas
    std::cout << units << "," << tens << "," << hundreds << "," << thousands << std::endl;

    return 0;
}
