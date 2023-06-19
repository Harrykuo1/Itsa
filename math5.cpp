#include <iostream>

int main() {
    double num;
    while (std::cin >> num) {
        int ans = num * num * 100;
        if (ans % 10 >= 5) {
            ans += 10;
        }
        ans /= 10;
        std::cout << ans / 10 << "." << ans % 10 << std::endl;
    }
    return 0;
}
