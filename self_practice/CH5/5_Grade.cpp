#include<stdio.h>

int main(){
	char s;
	printf("請輸入成績 : ");
	scanf("%c",&s);
	switch(s){
		case'a':
		case'A':
			printf("Excellent");
			break;
		case'b':
		case'B':
			printf("Good");
			break;
		case'C':
		case'c':
			printf("Pass");
			break;
		case'd':
		case'D':
			printf("Not Good");
			break;
		case'f':
		case'F':
			printf("Fail");
			break;
		default:
			printf("輸入錯誤!");
			break;
	}
	return 0;
}
