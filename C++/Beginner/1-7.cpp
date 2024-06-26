// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=43060
#include <iostream>

void printHollowTriangle() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            if (j == 0 || j == 2 * i || i == 4) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void printFilledTriangle() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void printInvertedFilledTriangle() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < 9 - 2 * i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int type = 0;
    std::cin >> type;

    if (type == 1) {
        printHollowTriangle();
    } else if (type == 2) {
        printFilledTriangle();
    } else if (type == 3) {
        printInvertedFilledTriangle();
    }

    return 0;
}
