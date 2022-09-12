#include<stdio.h>

int main(){
	int n,a1,a2,a3;
	scanf("%d,%d,%d,%d",&n,&a1,&a2,&a3);
	if(n>=15*a1+20*a2+30*a3){
		int coin=n-(15*a1+20*a2+30*a3);
		int ans1,ans2,ans3;
		ans3=coin/50;
		coin-=ans3*50;
		ans2=coin/5;
		coin-=ans2*5;
		ans1=coin;
		printf("%d,%d,%d\n",ans1,ans2,ans3);
	}
	else{
		printf("0\n");
	}
}