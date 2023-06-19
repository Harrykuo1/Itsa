#include <iostream>

int main() {
    int money;
    while (std::cin >> money) {
        int ten = money / 10;
        money -= ten * 10;
        int five = money / 5;
        money -= five * 5;
        int one = money / 1;
        money -= one * 1;
        std::cout << "NT10=" << ten << std::endl;
        std::cout << "NT5=" << five << std::endl;
        std::cout << "NT1=" << one << std::endl;
    }
    return 0;
}
