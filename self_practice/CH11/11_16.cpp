#include<stdio.h>

int main(){
	int x = 10;
	int *ptr;
	ptr = &x;
	
	printf("ptr 現在的位址 : %X\n",ptr);
	ptr++;	//指標+-會根據資料型態的大小做相應的變化 
	printf("ptr+1 的位址 : %X\n",ptr);
	ptr--;
	printf("ptr-1 的位址 : %X",ptr);
	
	return 0;
}
