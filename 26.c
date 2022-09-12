#include<stdio.h>
#include<stdlib.h>

int count(int num){
	int sum=0;
	while(num){
		sum+=num%10;
		num/=10;
	}
	return sum;
}

int cmp(const void* a, const void* b){
	if(count(*(int*)a)==count(*(int*)b)){
		return *(int*)a > *(int*)b;
	}
	return count(*(int*)a) > count(*(int*)b);
}

int main(){
	int n;
	int arr[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),cmp);
	printf("%d",arr[0]);
	for(int i=1;i<n;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");

}