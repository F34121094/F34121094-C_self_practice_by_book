#include<stdio.h>

int main(){
	int n[5];
	int *ptr = n;
	int total = 0;
	printf("�п�J 5 �Ӿ��\n : ");
	for(int i = 0;i<5;i++){
		scanf("%d",(ptr+i));
		total += *(ptr+i);
	}
	printf("�}�C��ƩM�O %d",total);
	
	return 0;
}
