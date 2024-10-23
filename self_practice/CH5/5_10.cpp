#include<stdio.h>

int main(){
	int a,b,c;
	printf("請輸入任意 2 數 ==>");
	scanf("%d %d",&a,&b);
	printf("較大值為 ");
	c = (a>b)?a:b;
	printf("%d",c);
	
	return 0;
}
