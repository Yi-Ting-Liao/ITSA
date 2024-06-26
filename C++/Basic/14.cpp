// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30766

#include <iostream>
#include <string>

int main() {
    std::string str;
    while (std::cin >> str) {
        bool   isReverse = true;
        size_t len       = str.length();
        for (size_t i = 0; i < len / 2; i++) {
            if (str[i] != str[len - i - 1]) {
                isReverse = false;
                break;
            }
        }
        if (isReverse) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
