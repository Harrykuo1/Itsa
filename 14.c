#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char arr[1000000];

int main(){
	while(scanf("%s",arr)!=EOF){
		int len=strlen(arr);
		int l=0,r=len-1;
		bool ans=true;
		while(l<r){
			if(arr[l]!=arr[r]){
				ans=false;
				break;
			}
			l++;
			r--;
		}
		if(ans){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}