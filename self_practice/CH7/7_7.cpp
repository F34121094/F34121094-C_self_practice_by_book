#include<stdio.h>

int main(){
	int n;
	int sc[10];
	int sum = 0;
	printf("請輸入學生人數 ==> ");
	scanf("%d", &n);
	
	for(int i = 0;i<n;i++ ){
		printf("請輸入分數 ==> ");
		scanf("%d",&sc[i]);
		sum += sc[i];
	}
	printf("平均分數是 %.2f", (float)sum / (float)n);
}
