#include<stdio.h>

int main(){
	int x;
	char ch;
	printf("�A�O�_�ݭn�r��(y/n) ");
	scanf("%c",&ch);
	if (ch == 'y'){
		printf("�A�X�� ");
		scanf("%d",&x);
		if (x >= 18){
			printf("�A�ݭn�Ҿr��\n");
		}else{
			printf("�藍�_�A�~�֤Ӥp�F\n");
		}
	}else{
		printf("�T�T~");
	}
	return 0;
} 
