#include <iostream>
#include <cstring>

char arr[1000000];

int main() {
    while (std::cin >> arr) {
        int len = strlen(arr);
        int l = 0, r = len - 1;
        bool ans = true;
        while (l < r) {
            if (arr[l] != arr[r]) {
                ans = false;
                break;
            }
            l++;
            r--;
        }
        if (ans) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
