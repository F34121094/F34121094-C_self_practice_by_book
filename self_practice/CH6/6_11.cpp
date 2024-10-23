#include<stdio.h>

int main(){
	int n,d;
	printf("請輸入任意整數\n==> ");
	scanf("%d",&n);
	printf("整數的相反輸出\n==> ");
	while (n != 0){
		d = n % 10;
		printf("%d",d);
		n /= 10;
	}
	
	return 0;
} 
