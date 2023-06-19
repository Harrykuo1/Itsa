#include <iostream>

int dfs(int n) {
    if (n <= 1) {
        return n + 1;
    } else {
        return dfs(n - 1) + dfs(n / 2);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << dfs(n) << std::endl;
    return 0;
}
