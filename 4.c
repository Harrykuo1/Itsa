#include<stdio.h>

int main(){
	int startH, startM, endH, endM;
	scanf("%d%d%d%d", &startH, &startM, &endH, &endM);
	startM += startH*60;
	endM += endH*60;
	if(startM > endM){
		endM += 24*60;
	}
	int totalM = endM-startM;
	int ans = 0;
	if(0<totalM){
		ans += totalM>=120 ? 120 : totalM;
	}
	totalM-=120;
	if(120<totalM){
		ans += totalM>=90 ? 120 : totalM/30*40;
	}
	totalM -= 120;
	ans += totalM/30*60;
	printf("%d\n",ans);
}