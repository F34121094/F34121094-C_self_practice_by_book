#include<stdio.h>

int main(){
	int i ;
	char ch;
	
	printf("請輸入 1 個整數\n==>");
	scanf("%d",&i);
	printf("請輸入 1 個字元\n==>");
	scanf("%c",&ch);
	
	printf("整數是 %d , Ascii碼是 %d , 字元是 %c",i,ch,ch);
	
	return 0;
}
