#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	int ans = rand()%10 +1;
	int re;
	int  time = 0;
	while (1){
		time += 1;
		printf("請輸入欲猜數字 : ");
		scanf("%d", &re);
		if (re == ans){
			break;
		}else if(re < ans){
			printf("請猜大一點!\n");
		}else{
			printf("請猜小一點!\n");
		}
	}
	printf("花了 %d 次猜對", time);
	
	return 0;
}
