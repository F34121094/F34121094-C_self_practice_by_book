#include<stdio.h>

int main(){
	float total = 0.0;
	float height = 100.0;
	
	for(int i = 1; i< 11;i++){
		total += height;
		height /= 2.0;
		total += height;
	} 
	printf("�� 10 �����a��g�Z�� %f\n", total);
	printf("�� 10 �����a�ϼu���� %f", height);
	
	return 0;
}
