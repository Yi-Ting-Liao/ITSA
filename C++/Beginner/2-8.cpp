// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=69090
#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a = 0;
        std::cin >> a;
        std::cout << a << " " << a * a << " " << a * a * a << std::endl;
    }
}
