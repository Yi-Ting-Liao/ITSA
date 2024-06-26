// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15906

#include <cstdlib>
#include <iostream>

int main() {
    int input = 0;
    while (std::cin >> input) {
        // print the binary representation of input
        for (size_t i = 0; i < 8; i++) {
            std::cout << ((input >> (7 - i)) & 1);
        }
        std::cout << std::endl;
    }
    return 0;
}
