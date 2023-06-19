#include <iostream>
#include <iomanip>

float arr[100];

int main() {
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }

    float maxNum = arr[0];
    float minNum = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "maximum:" << maxNum << std::endl;
	std::cout << std::fixed << std::setprecision(2);
    std::cout << "minimum:" << minNum << std::endl;

    return 0;
}
