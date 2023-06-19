#include <iostream>

int main() {
    int sum = 0, tmp;
    for (int i = 0; i < 6; i++) {
        std::cin >> tmp;
        sum += tmp * tmp * tmp;
    }
    std::cout << sum << std::endl;
    return 0;
}
