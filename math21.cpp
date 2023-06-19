#include <iostream>

int main() {
    long long int n;
    while (std::cin >> n) {
        long long int ans = 1;
        for (int i = 2; i <= n; i++) {
            ans *= i;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
