#include<stdio.h>

int main(){
	float speed;
	printf("�п�J���b�t�� : ");
	scanf("%f",&speed);
	
	if (speed >= 16.7){
		printf("�H�y�ìP�i�����Ӷ��t");		
	}else if (speed >= 11.2){
		printf("�H�y�ìP�i��¶�Ӷ�����");
	}else if (speed > 7.9){
		printf("�H�y�ìP�i��¶�a�y�����B��");
	}else if (speed == 7.9){
		printf("�H�y�ìP�i��¶�a�y�y��ιB��");
	}else{
		printf("�H�y�ìP�L�k�i�J�Ӫ�");
	}
	
	return 0;
	
	return 0;
}
