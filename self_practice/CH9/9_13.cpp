#include<stdio.h>
int add(int a,int b){
	return a+b;	
}
int multi(int a, int b){
	return a*b;
}

int main(){
	int choose,a,b;
	printf("請輸入 1 或 2 選擇計算方式\n1 : 加法運算\n2 : 乘法運算\n=> ");
	scanf("%d",&choose);
	printf("請輸入兩數值 : ");
	scanf("%d%d",&a,&b);
	if (choose == 1){
		printf("%d + %d = %d",a,b,add(a,b));
	}else if(choose == 2){
		printf("%d * %d = %d",a,b,multi(a,b));
	}else{
		printf("計算方式選擇錯誤");
	}
	
	return 0;
}
