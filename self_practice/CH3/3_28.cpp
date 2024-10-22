#include<stdio.h>

int main(){
	float a;
	printf("請輸入華氏溫度\n==> ");
	scanf("%f",&a);
	
	printf("攝氏溫度是 %.2f",5.0/9.0 * (a-32.0) );
	
	return 0;
}
