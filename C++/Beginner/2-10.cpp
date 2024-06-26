// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=42601
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "km=" << round(a * 1.6 * 10) / 10 << std::endl;
}
