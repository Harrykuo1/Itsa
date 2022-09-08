#include<stdio.h>

int main(){
	long long int num;
	scanf("%lld",&num);
	long long int ans=0;
	for(int i=3;i<=num;i++){
		if(i%3==0){
			ans+=i;
		}
	}
	printf("%lld\n",ans);
}