#include <iostream>
#include <cmath>

int main() {
    int num;
    std::cin >> num;

    bool isPrime = true;
    if (num == 1) {
        isPrime = false;
    } else if (num % 2 == 0 && num > 2) {
        isPrime = false;
    } else if (num >= 3) {
        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
