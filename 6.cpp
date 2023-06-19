#include <iostream>

int main() {
    int month;
    std::cin >> month;

    if (3 <= month && month <= 5) {
        std::cout << "Spring" << std::endl;
    }
    if (6 <= month && month <= 8) {
        std::cout << "Summer" << std::endl;
    }
    if (9 <= month && month <= 11) {
        std::cout << "Autumn" << std::endl;
    }
    if (month == 12 || month == 1 || month == 2) {
        std::cout << "Winter" << std::endl;
    }

    return 0;
}
