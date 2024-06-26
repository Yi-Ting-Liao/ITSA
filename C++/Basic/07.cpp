// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=15911

#include <cstdlib>
#include <iostream>

int main() {
    size_t inputCnt = 0;
    std::cin >> inputCnt;
    for (size_t i = 0; i < inputCnt; i++) {
        char op    = 0;
        int  real1 = 0, imaginary1 = 0, real2 = 0, imaginary2 = 0;
        std::cin >> op >> real1 >> imaginary1 >> real2 >> imaginary2;
        switch (op) {
        case '+':
            std::cout << real1 + real2 << " " << imaginary1 + imaginary2 << std::endl;
            break;
        case '-':
            std::cout << real1 - real2 << " " << imaginary1 - imaginary2 << std::endl;
            break;
        case '*':
            std::cout << real1 * real2 - imaginary1 * imaginary2 << " " << real1 * imaginary2 + real2 * imaginary1 << std::endl;
            break;
        default:
            break;
        }
    }
    return 0;
}
