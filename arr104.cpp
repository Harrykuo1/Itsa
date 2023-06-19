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

int cmp(const void* a, const void* b) {
    const int* ptrA = static_cast<const int*>(a);
    const int* ptrB = static_cast<const int*>(b);
    if (count(*ptrA) == count(*ptrB)) {
        return (*ptrA > *ptrB) - (*ptrA < *ptrB);
    }
    return count(*ptrA) > count(*ptrB);
}

int main() {
    int n;
    int arr[1000];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::qsort(arr, n, sizeof(int), cmp);
    std::cout << arr[0];
    for (int i = 1; i < n; i++) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    return 0;
}
