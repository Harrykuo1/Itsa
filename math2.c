#include<stdio.h>

signed main(){
    int bottom,high;
    while(scanf("%d%d",&bottom,&high)!=EOF){
        printf("%.1lf\n",bottom*high/2.0);
    }
}