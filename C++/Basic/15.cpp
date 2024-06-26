// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=15922
#include <cctype>
#include <iostream>
#include <map>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);  // Read a line of text

    // Count words
    int wordCount = 0;
    for (size_t i = 0; i < input.length(); ++i) {
        if (isalpha(input[i]) != 0) {
            // If current character is a letter, check if it's the start of a word
            if (i == 0 || (isalpha(input[i - 1]) == 0)) {
                ++wordCount;
            }
        }
    }
    std::cout << wordCount << std::endl;

    // Count occurrences of each letter
    std::map<char, int> charCount;
    for (char c : input) {
        if (isalpha(c) != 0) {
            ++charCount[static_cast<char>(tolower(c))];  // Convert to lowercase for consistent counting
        }
    }

    // Output letters and their occurrences
    for (auto &pair : charCount) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}
