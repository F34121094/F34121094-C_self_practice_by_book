#include<stdio.h>

int main(){
	char c;
	printf("A : Access	......\n");
	printf("B : Excel	......\n");
	printf("C : Word	......\n");
	printf("請選擇 ==> ");
	scanf("%c", &c);
	
	switch(c){
		case'a':
		case'A':
			printf("Access 為文書軟體\n");
			break;
		case'b':
		case'B':
			printf("Excel 為試算表軟體\n");
			break;
		case'c':
		case'C':
			printf("Word 為文書處理軟體\n");
			break;
		default:
			printf("輸入錯誤");
			break;
	}
	
	return 0;
}
