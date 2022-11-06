#include<stdio.h>

#define int long long 

signed main() {
    int num1,num2;
    while (~scanf("%lld%lld", &num1,&num2)) {
        num1+=num2;
        printf("%lld\n", num1*num1);
    }
}