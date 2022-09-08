#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int x, y;
	scanf("%d%d",&x,&y);
	if(pow(abs(x),2) + pow(abs(y),2)<=10000){
		printf("inside\n");
	}
	else{
		printf("outside\n");
	}
}