#include<stdio.h>

int main(){
	char name[] = "Willy";
	char *ptr = name;
	
	puts(ptr);
	printf("�ثe ptr ��} = %X\n\n",ptr);
	ptr = "Eric";
	puts(ptr);
	printf("�ק�� ptr ��} = %X",ptr);
	
	return 0;
}
