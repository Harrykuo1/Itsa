#include<stdio.h>

int main() {
    long long int n;
    while (~scanf("%lld", &n)) {
        long long int ans=1;
        for(int i=2;i<=n;i++){
            ans*=i;
        }
        printf("%lld\n",ans);
    }
}