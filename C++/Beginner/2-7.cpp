// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=42598
#include <iostream>

int main() {
    int max = -1;
    for (int i = 0; i < 3; i++) {
        int temp = 0;
        std::cin >> temp;
        if (temp > max) {
            max = temp;
        }
    }
    std::cout << max << std::endl;
}
