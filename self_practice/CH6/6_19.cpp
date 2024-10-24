#include<stdio.h>

int main(){
	int ans = 10;
	int respond;
	int time = 0;
	while (1){
		time ++;
		printf("請輸入欲猜數字 : ");
		scanf("%d", &respond);
		if (respond == ans){
			break;
		}
	}
	printf("花 %d 次猜對",time);
	return 0;
}
