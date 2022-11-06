#include<stdio.h>

signed main() {
    int num1, num2;
    while (~scanf("%d%d", &num1, &num2)) {
        printf("%d+%d=%d\n", num1, num2, num1 + num2);
        printf("%d*%d=%d\n", num1, num2, num1 * num2);
        printf("%d-%d=%d\n", num1, num2, num1 - num2);
        if (num1 % num2 >= 0) {
            printf("%d/%d=%d...%d\n", num1, num2, num1 / num2, num1 % num2);
        }
        else {
            printf("%d/%d=%d...%d\n", num1, num2, num1 / num2 - 1, num1 % num2 + num2);
        }
    }
}