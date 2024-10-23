#include<stdio.h>

int main(){
	int i,j;
	
start:
	printf("請輸入 2 個數字 ==>\n");
	scanf("%d %d",&i,&j);
	if (i>j){
		goto stop;		
	}else{
		goto start;
	}
stop:
	printf("程式結束");
	return 0;
} 
