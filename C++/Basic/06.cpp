// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754

#include <cstdlib>
#include <iostream>

int main() {
    size_t month = 0;
    while (std::cin >> month) {
        switch (month) {
        case 1:
        case 2:
            std::cout << "Winter" << std::endl;
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Spring" << std::endl;
            break;
        case 6:
        case 7:
        case 8:
            std::cout << "Summer" << std::endl;
            break;
        case 9:
        case 10:
        case 11:
            std::cout << "Autumn" << std::endl;
            break;
        case 12:
            std::cout << "Winter" << std::endl;
            break;
        default:
            std::cout << std::endl;
            break;
        }
    }
    return 0;
}
