#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[] = "Borland C++ Introduction";
	char str2[] = "Visual C++ Introduction";
	
	int i;
	i = strcmp(str1,str2);
	
	if (i==0){
		printf("�r��ۦP\n");
	}else if(i>0){
		puts("�r�ꤣ�P");
		printf("�r�� 1 �r���� > �r�� 2 ");
	}else{
		puts("�r�ꤣ�P");
		printf("�r�� 2 �r���� > �r�� 1");
	}
	
	return 0;
}
