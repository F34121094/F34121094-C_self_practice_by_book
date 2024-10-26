#include<stdio.h>
int add(int n){
	int total = 0;
	for (int i = 1; i<=n;i++){
		total += i;
	}
	return total;
}

int main(){
	int n;
	printf("請輸入系列加總值 : ");
	scanf("%d",&n);
	printf("從 1 加到 %d = %d",n,add(n));
	
	return 0;
}
