#include<stdio.h>

int main(){
	int x = 10;
	int *ptr;
	ptr = &x;
	
	printf("ptr �{�b����} : %X\n",ptr);
	ptr++;	//����+-�|�ھڸ�ƫ��A���j�p���������ܤ� 
	printf("ptr+1 ����} : %X\n",ptr);
	ptr--;
	printf("ptr-1 ����} : %X",ptr);
	
	return 0;
}
