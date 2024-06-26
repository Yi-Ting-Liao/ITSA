// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761

#include <iostream>

size_t function(size_t n) {
    if (n == 0 || n == 1) {
        return n + 1;
    }
    return function(n - 1) + function(n / 2);
}

int main() {
    size_t input = 0;
    std::cin >> input;

    std::cout << function(input) << std::endl;

    return 0;
}
