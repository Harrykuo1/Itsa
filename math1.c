#include<stdio.h>

signed main(){
    int top,bottom,high;
    while(scanf("%d%d%d",&top,&bottom,&high)!=EOF){
        printf("Trapezoid area:%.1lf\n",(top+bottom)/2.0*high);
    }
}