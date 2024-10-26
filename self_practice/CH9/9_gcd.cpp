#include<stdio.h>
int gcd(int a,int b){
	int t;
	if (b>a){
		t = b;
		b = a;
		a = t;
	}
	while (1){
		if (a%b == 0){
			return b;
		}else{
			t = a-b;
			if(b > t){
				a = b;
				b = t;
			}else{
				a = t;
			}
		}
	}
	
}

int main(){
	int a,b;
	printf("請輸入 2 個正整數\n==> ");
	scanf("%d%d",&a,&b);
	printf("最大公約數是 %d",gcd(a,b));
	
	return 0;
}
