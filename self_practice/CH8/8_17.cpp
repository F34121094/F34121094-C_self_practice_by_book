#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char code[] = "Ming 52 Chi";
	printf("原始驗證碼 : %s\n",code);
	strupr(code);
	printf("大寫驗證碼 : %s\n",code);
	strlwr(code);
	printf("小寫驗證碼 : %s",code);
	
	return 0;
}
