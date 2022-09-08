#include<stdio.h>

int main(){
	int month;
	scanf("%d",&month);
	if(3<=month && month<=5){
		printf("Spring\n");
	}
	if(6<=month && month<=8){
		printf("Summer\n");
	}
	if(9<=month && month<=11){
		printf("Autumn\n");
	}
	if(month==12 || month==1 || month==2){
		printf("Winter\n");
	}
}