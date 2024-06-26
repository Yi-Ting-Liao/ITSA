// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=42596
#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << a << "+" << b << "=" << a + b << std::endl;
    std::cout << a << "*" << b << "=" << a * b << std::endl;
    std::cout << a << "-" << b << "=" << a - b << std::endl;
    if (a % b < 0) {
        std::cout << a << "/" << b << "=" << a / b - 1 << "..." << a % b + b << std::endl;
    } else {
        std::cout << a << "/" << b << "=" << a / b << "..." << a % b << std::endl;
    }
}
