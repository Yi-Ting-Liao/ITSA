#include <iomanip>
#include <iostream>

int main() {
    double a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Triangle area:" << a * b / 2.0 << std::endl;
}
