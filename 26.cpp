#include <iostream>
#include <algorithm>

int count(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool cmp(int a, int b) {
    if (count(a) == count(b)) {
        return a < b;
    }
    return count(a) < count(b);
}

int main() {
    int n;
    int arr[1000];

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + n, cmp);

    std::cout << arr[0];
    for (int i = 1; i < n; i++) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    return 0;
}
