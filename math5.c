#include<stdio.h>

signed main() {
    double num;
    while (~scanf("%lf", &num)) {
        int ans=num*num*100;
        if(ans%10>=5){
            ans+=10;
        }
        ans/=10;
        printf("%d.%d\n",ans/10,ans%10);
    }
}