// https://e-tutor.itsa.org.tw/mod/programming/view.php?a=15926

#include <iostream>
#include <string>

char nextCharacter(char c) {
    switch (c) {
        case ' ': return ' ';
        case '!': return '@';
        case '@': return '#';
        case '#': return '$';
        case '$': return '%';
        case '%': return '^';
        case '^': return '&';
        case '&': return '*';
        case '*': return '(';
        case '(': return ')';
        case ')': return '_';
        case '_': return '+';
        case '+': return '+';
        case '`': return '1';
        case '1': return '2';
        case '2': return '3';
        case '3': return '4';
        case '4': return '5';
        case '5': return '6';
        case '6': return '7';
        case '7': return '8';
        case '8': return '9';
        case '9': return '0';
        case '0': return '-';
        case '-': return '=';
        case '=': return '=';
        case '\t': return '\t';
        case '\n': return '\n';
        case '\r': return '\r';
        case 'a': return 's';
        case 'b': return 'n';
        case 'c': return 'd';
        case 'd': return 'f';
        case 'e': return 'r';
        case 'f': return 'g';
        case 'g': return 'h';
        case 'h': return 'j';
        case 'i': return 'o';
        case 'j': return 'k';
        case 'k': return 'l';
        case 'l': return ';';
        case 'm': return ',';
        case 'n': return 'm';
        case 'o': return 'p';
        case 'p': return '[';
        case 'q': return 'w';
        case 'r': return 't';
        case 's': return 'd';
        case 't': return 'y';
        case 'u': return 'i';
        case 'v': return 'c';
        case 'w': return 'e';
        case 'x': return 'c';
        case 'y': return 'u';
        case 'z': return 'x';
        case '[': return ']';
        case ']': return '\\';
        case '\\': return '\\';
        case ';': return '\'';
        case '\'': return '\'';
        case ',': return '.';
        case '.': return '/';
        case '/': return '/';
        default: return static_cast<char>(c + 1);
    }
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    for (char c : input) {
        std::cout << nextCharacter(c);
    }
    std::cout << std::endl;

    return 0;
}
