#include <iostream>

int main() {
    int x, y;
    while (std::cin >> x >> y) {
        if (x * x + y * y <= 10000 && x <= 100 && y <= 100) {
            std::cout << "inside" << std::endl;
        } else {
            std::cout << "outside" << std::endl;
        }
    }
    return 0;
}
