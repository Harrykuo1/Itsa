#include<stdio.h>

int dfs(int n){
	if(n<=1){
		return n+1;
	}
	else{
		return dfs(n-1) + dfs(n/2);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",dfs(n));
}