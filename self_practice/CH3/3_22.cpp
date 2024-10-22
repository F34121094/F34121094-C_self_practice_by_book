#include<stdio.h>

int main(){
	char name[10];
	
	printf("請輸入你的名字 ==> ");
	scanf("%s",name);	//讀取字串不用加& 
	printf("\n\n%s 歡迎進入系統",name);
	
	return 0;
}
