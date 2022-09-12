#include<stdio.h>

int main(){
	int arr[10];
	for(int i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",arr[5]);
	for(int i=4;i>=0;i--){
		printf(" %d",arr[i]);
	}
	printf("\n");
}