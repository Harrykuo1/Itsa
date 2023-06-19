#include <iostream>
#include <cstring>

char arr[100000];
char subArr[100000];

int main() {
    std::cin >> subArr >> arr;
    int cnt = 0;
    int subArrLen = strlen(subArr);
    int arrLen = strlen(arr);

    for (int i = 0; i <= arrLen - subArrLen; i++) {
        bool isFinished = true;
        for (int j = 0; j < subArrLen; j++) {
            if (arr[i + j] != subArr[j]) {
                isFinished = false;
                break;
            }
        }
        if (isFinished) {
            cnt++;
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}
