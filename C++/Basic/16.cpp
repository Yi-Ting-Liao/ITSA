// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=15923
#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;  // Read two strings

    int    count = 0;
    size_t pos   = 0;

    // Count occurrences of str1 in str2
    while ((pos = str2.find(str1, pos)) != std::string::npos) {
        ++count;
        ++pos;
    }

    std::cout << count << std::endl;

    return 0;
}
