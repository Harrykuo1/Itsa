#include<stdio.h>

float arr[100];

int main(){
	for(int i=0;i<10;i++){
		scanf("%f",&arr[i]);
	}
	float maxNum=arr[0];
	float minNum=arr[0];
	for(int i=1;i<10;i++){
		if(arr[i]>maxNum){
			maxNum=arr[i];
		}
		if(arr[i]<minNum){
			minNum=arr[i];
		}
	}
	printf("maximum:%.2f\n",maxNum);
	printf("minimum:%.2f\n",minNum);
}