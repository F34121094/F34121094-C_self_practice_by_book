#include<stdio.h>

int main(){
	int num[3];
	printf("請輸入 3 個整數\n");
	
	for(int i = 0; i<3;i++){
		printf("輸入數字 %d : ",i+1);
		scanf("%d",num+i); 
	}
	printf("\n");
	for(int i = 0; i<3;i++){
		printf("num[%d] = %d\n",i , num[i]);
	}
	
	return 0;
}
