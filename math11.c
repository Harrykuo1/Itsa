#include<stdio.h>

int main() {
    int money;
    while (~scanf("%d", &money)) {
        int ten = money / 10;
        money -= ten * 10;
        int five = money / 5;
        money -= five * 5;
        int one = money / 1;
        money -= one * 1;
        printf("NT10=%d\n", ten);
        printf("NT5=%d\n", five);
        printf("NT1=%d\n", one);

    }
}