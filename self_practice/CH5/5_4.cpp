#include<stdio.h>

int main(){
	int n;
	printf("請輸入年齡 : ");
	scanf("%d",&n);
	if (n<20){
		printf("你的年齡太小\n須年滿 20 歲才可以購買菸酒!");
	}else{
		printf("歡迎購買菸酒");
	}
	
	return 0;
}
