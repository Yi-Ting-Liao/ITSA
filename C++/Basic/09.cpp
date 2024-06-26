#include <iostream>

int main() {
    size_t number = 0;
    while (std::cin >> number) {
        size_t answer = 0;
        for (size_t i = 1; i <= number; i++) {
            if (i % 3 == 0) {
                answer += i;
            }
        }
        std::cout << answer << std::endl;
    }
    return 0;
}
