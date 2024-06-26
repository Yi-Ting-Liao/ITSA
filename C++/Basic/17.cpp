// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=15924

#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);  // 讀取一行英文句子

    std::istringstream       iss(sentence);
    std::string              word;
    std::set<std::string>    uniqueWords;   // 存放不重複的單詞
    std::vector<std::string> wordsInOrder;  // 存放按照出現順序的單詞

    // 分詞並存儲不重複的單詞和按照出現順序的單詞
    while (iss >> word) {
        // 轉換單詞為小寫
        for (char &c : word) {
            c = static_cast<char>(std::tolower(c));
        }
        // 如果單詞不在集合中，將其添加到集合和向量中
        if (uniqueWords.find(word) == uniqueWords.end()) {
            uniqueWords.insert(word);
            wordsInOrder.push_back(word);
        }
    }

    // 輸出按照原句中出現順序的單詞
    for (size_t i = 0; i < wordsInOrder.size(); ++i) {
        std::cout << wordsInOrder[i];
        if (i != wordsInOrder.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
