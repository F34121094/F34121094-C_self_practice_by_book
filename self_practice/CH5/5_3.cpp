#include<stdio.h>

int main(){
	int x;
	printf("請輸入整數值 : ");
	scanf("%d",&x);
	if (x<0){
		x = -x;
	}
	printf("絕對值 : %d",x);
	
	return 0;
} 
