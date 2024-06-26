// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757

#include <iostream>

int main() {
    size_t a = 0;
    size_t b = 0;
    while (std::cin >> a >> b) {
        while (a > 0 && b > 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        if (a == 0) {
            std::cout << b << std::endl;
        } else {
            std::cout << a << std::endl;
        }
    }
    return 0;
}
