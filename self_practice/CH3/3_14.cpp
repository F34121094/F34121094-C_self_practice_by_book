#include<stdio.h>

int main(){
	int i = 10;
	float j = 123.56;
	
	printf("格式化輸出八位元\n");
	printf("/%o/\n",i);	//八進位制使用o 
	printf("/%-8o/\n",i);
	printf("格式化輸出十六位元\n");
	printf("/%X/\n",i);	//16進位制使用x 然後如果x是大寫，字母也會是大寫 
	printf("/%8x/\n",i);
	printf("格式化輸出不帶符號十進位制\n");
	printf("/%u/\n",i);	//不帶正負號的十進位使用 u (unsigned) 
	printf("/%8u/\n",i);
	printf("格式化輸出科學記號\n");
	printf("/%e/\n",j);
	printf("/%8.3e/\n",j);
} 
