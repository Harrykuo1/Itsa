#include <iostream>

long long int gcd(long long int a, long long int b) {
    if (a < b) {
        long long int tmp = a;
        a = b;
        b = tmp;
    }
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int main() {
    long long int num1, num2;
    while (std::cin >> num1 >> num2) {
        long long int ans = gcd(num1, num2);
        std::cout << ans << std::endl;
    }
    return 0;
}
