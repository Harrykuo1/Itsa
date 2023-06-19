#include <iostream>
#include <iomanip>

int main() {
    int bottom, high;
    while (std::cin >> bottom >> high) {
        double area = bottom * high / 2.0;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << area << std::endl;
    }
    return 0;
}
