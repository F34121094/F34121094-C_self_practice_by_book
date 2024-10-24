#include<stdio.h>

int main(){
	int sc[5];
	printf("輸入 0 代表輸入結束\n");
	int i = 0;
	int sum = 0;
	while (1){
		printf("請輸入成績 ==> ");
		scanf("%d",&sc[i]);
		if (sc[i] == 0){
			break;
		}
		sum += sc[i++];
		if(i == 5){
			printf("陣列已滿\n");
			break;
		}
	}
	printf("平均分數是 %.2f",(float)sum / (float)i);
}
