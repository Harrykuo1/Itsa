#include<stdio.h>

int main(){
	int height, sex;
	while(scanf("%d%d",&height,&sex)!=EOF){
		if(sex==1){
			printf("%.1lf\n",(height-80)*0.7);
		}
		else{
			printf("%.1lf\n",(height-70)*0.6);
		}
	}
}