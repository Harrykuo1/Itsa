#include <iostream>
#include <iomanip>

int main() {
    int height, sex;
    while (std::cin >> height >> sex) {
        if (sex == 1) {
            std::cout << std::fixed << std::setprecision(1) << (height - 80) * 0.7 << std::endl;
        } else {
            std::cout << std::fixed << std::setprecision(1) << (height - 70) * 0.6 << std::endl;
        }
    }
    return 0;
}
