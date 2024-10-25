#include<stdio.h>

void lager(int a,int b){
	if(a==b){
		printf("兩數值相等");
	}else if(a < b){
		printf("較大值為 %d",b);
	}else{
		printf("較大值為 %d",a);
	}
	return;
}

int main(){
	int a,b;
	printf("請輸入兩數值\n==> ");
	scanf("%d%d",&a,&b);
	lager(a,b);
	
	return 0; 
} 
