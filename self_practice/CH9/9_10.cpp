#include<stdio.h>
int add(int a,int b){
	return a+b;
}

int main(){
	int a, b;
	printf("請輸入兩數值\n==> ");
	scanf("%d%d",&a,&b);
	printf("%d + %d = %d",a,b,add(a,b));
	
	return 0;
}
