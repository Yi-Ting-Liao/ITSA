// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=43055
#include <iostream>

int main() {
    // input a 4 digit integer and output each digit separated
    int input = 0;
    std::cin >> input;
    std::cout << input / 1000 << std::endl;
    std::cout << input / 100 % 10 << std::endl;
    std::cout << input / 10 % 10 << std::endl;
    std::cout << input % 10 << std::endl;

    return 0;
}
