#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[] = "Introduction to C";
	char str2[] = "Published by DeepMind";
	
	printf("�Ĥ@���r�굲�X\n");
	strncat(str1,str2,5);
	puts(str1);
	puts("�ĤG���r�굲�X");
	strncat(str1,str2,40);
	puts(str1);
	
	return 0;
}
