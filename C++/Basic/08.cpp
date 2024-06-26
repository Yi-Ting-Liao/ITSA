// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30752

#include <cstdlib>
#include <iostream>

int main() {
    int number = 0;
    while (std::cin >> number) {
        bool isPrime = true;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
