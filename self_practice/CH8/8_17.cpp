#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char code[] = "Ming 52 Chi";
	printf("��l���ҽX : %s\n",code);
	strupr(code);
	printf("�j�g���ҽX : %s\n",code);
	strlwr(code);
	printf("�p�g���ҽX : %s",code);
	
	return 0;
}
