#include <iostream>

int main() {
    long long int num;
    std::cin >> num;

    long long int ans = 0;
    for (int i = 3; i <= num; i++) {
        if (i % 3 == 0) {
            ans += i;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
