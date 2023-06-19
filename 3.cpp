#include <iostream>
#include <cmath>

int main() {
    int x, y;
    std::cin >> x >> y;
    if (std::pow(std::abs(x), 2) + std::pow(std::abs(y), 2) <= 10000) {
        std::cout << "inside" << std::endl;
    } else {
        std::cout << "outside" << std::endl;
    }
    return 0;
}
