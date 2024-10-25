#include<stdio.h>
void comment(int t){
	if (t > 26){
		printf("現在好熱");
	}else if (t > 15){
		printf("現在很舒適");
	}else if (t > 5){
		printf("現在有點冷");
	}else{
		printf("現在好冷");
	}
	return;
}

int read(){
	int t;
	printf("請輸入現在的溫度 : ");
	scanf("%d",&t);
	return t;
}

int main(){
	int t;
	comment(read());
	
	return 0;
}
