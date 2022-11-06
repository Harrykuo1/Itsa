#include<stdio.h>

signed main() {
    int num;
    while (~scanf("%d", &num)) {
        int ans = num*1.6*100;
        if(ans%10>=5){
            ans+=100;
        }
        ans/=10;
        printf("%d.%d\n",ans/10,ans%10);
    }
}