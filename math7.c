#include<stdio.h>

#define int long long 

signed main() {
    int num;
    while (~scanf("%lld", &num)) {
        printf("%lld %lld %lld\n", num, num * num, num * num * num);
    }
}