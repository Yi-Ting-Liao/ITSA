// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747

#include <iomanip>
#include <iostream>

int main() {
    double input = 0;
    while (std::cin >> input) {
        std::cout << std::fixed << std::setprecision(1) << input * 1.6 << std::endl;
    }
    return 0;
}
