#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[] = "Introduction to C";
	char str2[] = "Published by DeepMind";
	
	printf("第一次字串結合\n");
	strncat(str1,str2,5);
	puts(str1);
	puts("第二次字串結合");
	strncat(str1,str2,40);
	puts(str1);
	
	return 0;
}
