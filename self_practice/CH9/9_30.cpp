#include<stdio.h>
#include<string.h>

int cal(char s[]){
	int l = strlen(s);
	return l;
}

int main(){
	char str[50];
	printf("請輸入字串 : ");
	scanf("%s",str);
	printf("字串長度 : %d",cal(str));
	
	return 0;
}
