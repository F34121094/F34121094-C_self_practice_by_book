#include<stdio.h>

int main(){
	char name[15];
	char *ptr = name;
	
	printf("請輸入帳號 : ");
	gets(name);
	printf("嗨囉 %s 歡迎進入系統",ptr);
	
	return 0;
}
