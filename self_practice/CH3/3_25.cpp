#include<stdio.h>

int main(){
	int a,b;
	printf("將英哩及碼數轉成公里\n");
	printf("請輸入英哩\n==>");
	scanf("%d",&a);
	printf("請輸入碼數\n==>");
	scanf("%d",&b);
	printf("結果是 %.3f",1.609*(a+(float)b/1760));
	
	return 0;
}
