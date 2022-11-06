#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char arr[1000];
	scanf("%s",arr);
	int letterCnt[30];
	memset(letterCnt,0,sizeof(letterCnt));
	for(int i=0;i<strlen(arr);i++){
		letterCnt[tolower(arr[i])-'a']++;
	}
	for(int i=0;i<26;i++){
		if(letterCnt[i]!=0){
			printf("%c %d\n",'a'+i,letterCnt[i]);
		}
	}
}