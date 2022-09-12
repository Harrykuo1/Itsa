#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char arr[100000];
char subArr[100000];

int main(){
	scanf("%s%s",subArr,arr);
	int cnt=0;
	for(int i=0;i<strlen(arr);i++){
		bool isFinished=true;
		for(int j=0;j<strlen(subArr);j++){
			if(arr[i+j]!=subArr[j]){
				isFinished=false;
				break;
			}
		}
		if(isFinished){
			cnt++;
		}
	}
	printf("%d\n",cnt);
}