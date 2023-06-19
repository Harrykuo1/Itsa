#include <iostream>
#include <iomanip>

int main() {
    int top, bottom, high;
    while (std::cin >> top >> bottom >> high) {
        double area = (top + bottom) / 2.0 * high;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Trapezoid area:" << area << std::endl;
    }
    return 0;
}
