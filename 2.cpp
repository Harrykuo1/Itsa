#include <iostream>
#include <iomanip>

int main() {
    int num;
    std::cin >> num;
    std::cout << std::fixed << std::setprecision(1) << static_cast<double>(num * 1.6) << std::endl;
    return 0;
}
