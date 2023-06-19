#include <iostream>

int main() {
    int arr[10];
    for (int i = 0; i < 6; i++) {
        std::cin >> arr[i];
    }
    std::cout << arr[5];
    for (int i = 4; i >= 0; i--) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
    return 0;
}
