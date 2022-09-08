#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
	int num;
	scanf("%d",&num);
	bool isPrime=true;
	if(num==1){
		isPrime=false;
	}
	else if(num%2==0 && num >2){
		isPrime=false;
	}
	else if(num>=3){
		for(int i=3;i*i<=num;i+=2){
			if(num%i==0){
				isPrime=false;
				break;
			}
		}
	}
	if(isPrime){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}