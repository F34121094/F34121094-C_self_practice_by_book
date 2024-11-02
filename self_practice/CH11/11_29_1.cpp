#include<stdio.h>

int main(){
	char name[] = "Willy";
	char *ptr = name;
	
	puts(ptr);
	printf("目前 ptr 位址 = %X\n\n",ptr);
	ptr = "Eric";
	puts(ptr);
	printf("修改後 ptr 位址 = %X",ptr);
	
	return 0;
}
