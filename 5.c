#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
	int arr[10];
	int num;
	bool lt0=false;
	memset(arr,0,sizeof(arr));
	scanf("%d",&num);
	if(num<0){
		lt0=true;
		num*=-1;
	}
	int index=0;
	while(num){
		arr[index++]=num%2;
		num/=2;
	}
	if(lt0){
		for(int i=0;i<8;i++){
			arr[i] = arr[i]==1?0:1;
		}
		arr[0]++;
		for(int i=0;i<8;i++){
			if(arr[i]>1){
				arr[i]-=2;
				arr[i+1]++;
			}
			else{
				break;
			}
		}
	}
	for(int i=7;i>=0;i--){
		printf("%d",arr[i]);
	}
	printf("\n");

}