#include <iostream>

int main() {
    int num;
    while (std::cin >> num) {
        int ans = num * 1.6 * 100;
        if (ans % 10 >= 5) {
            ans += 10;
        }
        ans /= 10;
        std::cout << ans / 10 << "." << ans % 10 << std::endl;
    }
    return 0;
}
