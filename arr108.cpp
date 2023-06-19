#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    char arr[1000];
    std::cin >> arr;
    int letterCnt[26] = {0};

    for (int i = 0; i < strlen(arr); i++) {
        if (std::isalpha(arr[i])) {
            letterCnt[std::tolower(arr[i]) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (letterCnt[i] != 0) {
            std::cout << static_cast<char>('a' + i) << " " << letterCnt[i] << std::endl;
        }
    }

    return 0;
}
