#include<stdio.h>

int main(){
	int i = 10;
	float j = 123.56;
	
	printf("�榡�ƿ�X�K�줸\n");
	printf("/%o/\n",i);	//�K�i���ϥ�o 
	printf("/%-8o/\n",i);
	printf("�榡�ƿ�X�Q���줸\n");
	printf("/%X/\n",i);	//16�i���ϥ�x �M��p�Gx�O�j�g�A�r���]�|�O�j�g 
	printf("/%8x/\n",i);
	printf("�榡�ƿ�X���a�Ÿ��Q�i���\n");
	printf("/%u/\n",i);	//���a���t�����Q�i��ϥ� u (unsigned) 
	printf("/%8u/\n",i);
	printf("�榡�ƿ�X��ǰO��\n");
	printf("/%e/\n",j);
	printf("/%8.3e/\n",j);
} 
