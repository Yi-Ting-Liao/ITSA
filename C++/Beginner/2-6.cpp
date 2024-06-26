// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=42597
#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        std::cout << (a + b) * (a + b) << std::endl;
    }
}
