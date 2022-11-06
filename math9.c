#include<stdio.h>

#define int long long 

signed main() {
    int shift;
    while(~scanf("%lld",&shift)){
        if(shift>31){
            printf("Value of more than 31\n");
        }
        else{
            printf("%lld\n",1<<shift);
        }
    }
}