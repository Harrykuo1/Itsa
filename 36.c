#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n%400==0){
		printf("Bissextile Year\n");
	}
	else if(n%4==0 && n%100!=0){
		printf("Bissextile Year\n");
	}
	else{
		printf("Common Year\n");
	}
}