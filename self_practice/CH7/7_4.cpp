#include<stdio.h>

int main(){
	int a[3] = {1,2,3};
	int b[] = {1,2,3,4,5};	//�i�H���ŧi�ݭn�X�ӪŶ� 
	int c[3] = {5};	//���L�Ŷ��ݨS���ŧi���ܷ|�۰ʶ� 0 
	printf("a �}�C =>\n");
	for (int i = 0;i<3;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\nb �}�C =>\n");
	for (int i = 0;i<5;i++){
		printf("b[%d] = %d\n",i,b[i]);
	}
	printf("\nc �}�C =>\n");
	for (int i = 0;i<3;i++){
		printf("c[%d] = %d\n", i,c[i]);
	}
	
	return 0;
} 
