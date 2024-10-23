#include<stdio.h>

int main(){
	int mon;
	printf("請輸入月份 : ");
	scanf("%d",&mon);
	switch(mon){
		case 2:
			printf("%d 月有 28 天",mon);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d 月有 31 天", mon);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d 月有 30 天", mon);
			break;
		default:
			printf("輸入錯誤");
			break;
	}
	
	return 0;
}
