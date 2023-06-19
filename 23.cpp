#include <iostream>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);

    int n, a1, a2, a3;
    char comma;

    if (iss >> n >> comma >> a1 >> comma >> a2 >> comma >> a3) {
        if (n >= 15 * a1 + 20 * a2 + 30 * a3) {
            int coin = n - (15 * a1 + 20 * a2 + 30 * a3);
            int ans1, ans2, ans3;
            ans3 = coin / 50;
            coin -= ans3 * 50;
            ans2 = coin / 5;
            coin -= ans2 * 5;
            ans1 = coin;
            std::cout << ans1 << "," << ans2 << "," << ans3 << std::endl;
        } else {
            std::cout << "0" << std::endl;
        }
    }

    return 0;
}
