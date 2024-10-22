#include<stdio.h>
#include<stdlib.h>

int main(){
	char ch1, ch2,ch3;
	
	printf("請輸入兩個字元\n");
	ch1 = getchar();
	ch2 = getchar();
	printf("第一個 => \n");
	putchar(ch1);
	printf("\n第二個 => \n");
	putchar(ch2);
	fflush(stdin);
	printf("\n請輸入一個字元\n");
	ch3 = getchar();
	printf("第三個 => \n");
	putchar(ch3);

	return 0;
} 
