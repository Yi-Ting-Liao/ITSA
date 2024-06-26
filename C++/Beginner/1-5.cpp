// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=43058
#include <iostream>
#include <string>

int main() {
    // Input a 5-digit integer
    std::string input;
    std::cin >> input;

    // Iterate through each digit in the input string
    for (char digit : input) {
        // Convert character to integer
        int num = digit - '0';

        // Print the corresponding number of asterisks
        for (int i = 0; i < num; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
