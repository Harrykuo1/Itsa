#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    char arr[100000];
    int letter[26] = {0};
    int letterCnt = 0;

    while (std::cin >> arr) {
        letterCnt++;
        for (int i = 0; i < strlen(arr); i++) {
            if (isalpha(arr[i])) {
                letter[tolower(arr[i]) - 'a']++;
            }
        }
    }

    std::cout << letterCnt << std::endl;
    for (int i = 0; i < 26; i++) {
        if (letter[i] != 0) {
            std::cout << static_cast<char>('a' + i) << " : " << letter[i] << std::endl;
        }
    }

    return 0;
}
