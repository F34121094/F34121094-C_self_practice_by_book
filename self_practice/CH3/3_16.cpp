#include<stdio.h>

int main(){
	int i ,j, k;
	
	printf("請輸入 10 進位數值 : ");
	scanf("%d",&i);
	printf("請輸入 8 進位數值 : ");
	scanf("%o",&j);
	printf("請輸入 16 進位數值 : ");
	scanf("%x",&k);
	printf("i = %d\n",i);
	printf("j = %d\n",j);
	printf("k = %d",k);
	
	return 0;
}
