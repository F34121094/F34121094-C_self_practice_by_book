#include<stdio.h>

int main(){
	char str[80] = "明志科技大學";
	
	printf("字串輸出如下\n");
	puts(str);
	puts(str+4);	//一個中文佔 2 個空間 
	puts(&str[4]);
	
	return 0;
}
