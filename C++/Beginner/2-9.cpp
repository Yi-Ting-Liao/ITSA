// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=69091
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(0);
    for (int i = 0; i < n; i++) {
        int a = 0;
        std::cin >> a;
        // output answer of 2^a
        if (a > 31) {
            std::cout << "Value of more than 31" << std::endl;
        } else {
            std::cout << pow(2, a) << std::endl;
        }
    }
}
