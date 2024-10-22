#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	char ch;
	
	printf("請輸入 1 個整數\n==>");
	scanf("%d",&i);
	fflush(stdin);	//用這個可以清空緩衝區 
	printf("請輸入 1 個字元\n==>");
	scanf("%c",&ch);
	
	printf("整數是 %d , Ascii碼是 %d , 字元是 %c",i,ch,ch);
	
	return 0;
}
