#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n % 400 == 0) {
        std::cout << "Bissextile Year\n";
    } else if (n % 4 == 0 && n % 100 != 0) {
        std::cout << "Bissextile Year\n";
    } else {
        std::cout << "Common Year\n";
    }
    return 0;
}
