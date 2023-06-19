#include <iostream>
#include <iomanip>

#define int long long

signed main() {
    double temp;
    while (std::cin >> temp) {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << temp * 9.0 / 5.0 + 32 << std::endl;
    }
    return 0;
}
