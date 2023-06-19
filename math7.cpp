#include <iostream>

#define int long long

signed main() {
    int num;
    while (std::cin >> num) {
        std::cout << num << " " << num * num << " " << num * num * num << std::endl;
    }
    return 0;
}
