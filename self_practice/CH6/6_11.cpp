#include<stdio.h>

int main(){
	int n,d;
	printf("�п�J���N���\n==> ");
	scanf("%d",&n);
	printf("��ƪ��ۤϿ�X\n==> ");
	while (n != 0){
		d = n % 10;
		printf("%d",d);
		n /= 10;
	}
	
	return 0;
} 
