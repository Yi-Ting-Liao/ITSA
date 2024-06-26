// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=69083
#include <iomanip>
#include <iostream>

int main() {
    // caculate triangle area
    int a = 0, b = 0;
    std::cin >> a >> b;
    // output the area with one point after the decimal point
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Triangle area:" << a * b / 2.0 << std::endl;
}
