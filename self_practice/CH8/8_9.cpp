#include<stdio.h>

int main(){
	char str[80] = "���Ӭ�ޤj��";
	
	printf("�r���X�p�U\n");
	puts(str);
	puts(str+4);	//�@�Ӥ���� 2 �ӪŶ� 
	puts(&str[4]);
	
	return 0;
}
