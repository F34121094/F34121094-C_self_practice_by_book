#include<stdio.h>

int main(){
	int num[3];
	printf("�п�J 3 �Ӿ��\n");
	
	for(int i = 0; i<3;i++){
		printf("��J�Ʀr %d : ",i+1);
		scanf("%d",num+i); 
	}
	printf("\n");
	for(int i = 0; i<3;i++){
		printf("num[%d] = %d\n",i , num[i]);
	}
	
	return 0;
}
