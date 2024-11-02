#include<stdio.h>

int main(){
	int n[5];
	int *ptr = n;
	int total = 0;
	printf("請輸入 5 個整數\n : ");
	for(int i = 0;i<5;i++){
		scanf("%d",(ptr+i));
		total += *(ptr+i);
	}
	printf("陣列整數和是 %d",total);
	
	return 0;
}
