// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760

#include <iostream>
#include <vector>

int main() {
    size_t col = 0, row = 0;
    while (std::cin >> col >> row) {
        std::vector<std::vector<int>> arr(col, std::vector<int>(row));
        for (size_t i = 0; i < col; i++) {
            for (size_t j = 0; j < row; j++) {
                std::cin >> arr[i][j];
            }
        }
        // print reversed array
        for (size_t i = 0; i < row; i++) {
            for (size_t j = 0; j < col; j++) {
                std::cout << arr[j][i] << (j == col - 1 ? '\n' : ' ');
            }
        }
    }
    return 0;
}
