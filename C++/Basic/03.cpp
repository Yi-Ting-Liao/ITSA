// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749

#include <cmath>
#include <iostream>

int main() {
    int x = 0, y = 0;
    while (std::cin >> x >> y) {
        if (std::sqrt(x * x + y * y) <= 200) {
            std::cout << "inside" << std::endl;
        } else {
            std::cout << "outside" << std::endl;
        }
    }
    return 0;
}
