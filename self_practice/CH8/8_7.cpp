#include<stdio.h>
#include<stdlib.h>

int main(){
	char st1[100],st2[100];
	
	printf("請輸入 2 個句子\n");
	gets(st1);
	gets(st2);
	
	printf("字串 1 是 ==>%s\n",st1);
	printf("字串 2 是 ==>%s",st2);
	
	return 0;
} 
