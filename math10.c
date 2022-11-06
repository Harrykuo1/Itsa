#include<stdio.h>

#define int long long 

signed main() {
    double temp;
    while (~scanf("%lf", &temp)) {
        /*
        int ans = temp * 900 / 5 + 3200;
        if (ans % 10 >= 5) {
            ans += 100;
        }
        ans /= 10;
        printf("%d.%d\n", ans / 10, ans % 10);*/
        printf("%.1lf\n",temp*9.0/5.0+32);
    }
}