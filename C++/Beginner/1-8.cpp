// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=43061
#include <iostream>
#include <string>
#include <vector>

void printDigit(int digit) {
    // Define the patterns for each digit from 0 to 9
    std::vector<std::vector<std::string>> patterns = {
        {"*****", "*   *", "*   *", "*   *", "*****"},  // 0
        {"    *", "    *", "    *", "    *", "    *"},  // 1
        {"*****", "    *", "*****", "*    ", "*****"},  // 2
        {"*****", "    *", "*****", "    *", "*****"},  // 3
        {"*   *", "*   *", "*****", "    *", "    *"},  // 4
        {"*****", "*    ", "*****", "    *", "*****"},  // 5
        {"*    ", "*    ", "*****", "*   *", "*****"},  // 6
        {"*****", "    *", "    *", "    *", "    *"},  // 7
        {"*****", "*   *", "*****", "*   *", "*****"},  // 8
        {"*****", "*   *", "*****", "    *", "*****"}   // 9
    };

    // Print the pattern for the specified digit
    for (int i = 0; i < 5; ++i) {
        std::cout << patterns[static_cast<size_t>(digit)][static_cast<size_t>(i)] << std::endl;
    }
}

int main() {
    int digit = 0;
    std::cin >> digit;

    printDigit(digit);
    return 0;
}
