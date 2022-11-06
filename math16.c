#include<stdio.h>

int main() {
    int x,y;
    while (~scanf("%d%d", &x,&y)) {
        if(x*x+y*y<=10000 && x<=100 && y<=100){
            printf("inside\n");
        }  
        else{
            printf("outside\n");
        }

    }
}