// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=43057

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    // Initialize the dictionaries
    std::unordered_map<std::string, std::string> en_to_zh = {
        {"dog", "狗"},
        {"cat", "貓"},
        {"duck", "鴨"},
        {"cow", "牛"},
        {"fox", "狐"}};

    std::unordered_map<std::string, std::string> zh_to_en = {
        {"狗", "dog"},
        {"貓", "cat"},
        {"鴨", "duck"},
        {"牛", "cow"},
        {"狐", "fox"}};

    // Input the word
    std::string input;
    std::cin >> input;

    // Output the translation
    if (en_to_zh.find(input) != en_to_zh.end()) {
        std::cout << en_to_zh[input] << std::endl;
    } else if (zh_to_en.find(input) != zh_to_en.end()) {
        std::cout << zh_to_en[input] << std::endl;
    } else {
        std::cout << "Translation not found" << std::endl;
    }

    return 0;
}
