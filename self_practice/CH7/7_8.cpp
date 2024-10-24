#include<stdio.h>

int main(){
	int sc[10];
	int total = 0;
	printf("輸入 0 代表輸入結束\n");
	int i = 0;
	while(1){
		printf("請輸入分數 ==> ");
		scanf("%d", &sc[i]);
		if(sc[i] == 0){
			break;
		}
		total += sc[i++];
	}
	printf("平均分數是 %.2f",(float)total/(float)i);
	
	return 0; 
}
