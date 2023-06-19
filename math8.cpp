#include <iostream>

#define int long long

signed main() {
    int num1, num2;
    while (std::cin >> num1 >> num2) {
        num1 += num2;
        std::cout << num1 * num1 << std::endl;
    }
    return 0;
}
