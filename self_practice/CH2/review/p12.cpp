#include<stdio.h>

int main(){
	double x;
	x = 4*(1 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11); //�O�o���k�n��ǭn�[.0�@ 
	printf("pi ���Ȭ� : %f\n",x);
	x = 4*(1- 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11 + 1.0/13);
	printf("pi ���Ȭ� : %f",x);
	
	return 0;
}
