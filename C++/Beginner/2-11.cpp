// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=69093
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double a = 0;
    std::cin >> a;
    // turn C to F
    std::cout << std::fixed << std::setprecision(1);
    std::cout << round((a * 9 / 5 + 32) * 10) / 10 << std::endl;
}
