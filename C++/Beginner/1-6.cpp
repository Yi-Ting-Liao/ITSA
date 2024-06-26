// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=43059

#include <iostream>

int main() {
    // Input the dimensions of the rectangle
    int m = 0, n = 0;
    std::cin >> m >> n;

    // Iterate to create the rectangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
