#include <iostream>

int gcd(int num1, int num2) {
    int maxNum = num1 >= num2 ? num1 : num2;
    int minNum = num1 <= num2 ? num1 : num2;
    if (maxNum % minNum == 0) {
        return minNum;
    } else {
        return gcd(minNum, maxNum % minNum);
    }
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    int ans = gcd(num1, num2);

    std::cout << ans << std::endl;

    return 0;
}
