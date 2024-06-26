// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=42593
#include <iomanip>
#include <iostream>

int main() {
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    // caculate trapezoid area
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Trapezoid area:" << (a + b) * c / 2.0 << std::endl;
}
