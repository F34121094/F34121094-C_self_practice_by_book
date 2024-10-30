#include<stdio.h>

int main(){
	int x;
	int *ptr;
	ptr = &x;
	printf("請輸入資料 : ");
	scanf("%d",ptr);
	printf("你的輸入是 : %d",*ptr);
	
	return 0;
}
