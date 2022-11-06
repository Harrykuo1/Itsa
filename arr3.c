#include<stdio.h>

int main(){
	int sum=0,tmp;
	for(int i=0;i<6;i++){
		scanf("%d",&tmp);
		sum+=tmp*tmp*tmp;
	}
	printf("%d\n",sum);
}