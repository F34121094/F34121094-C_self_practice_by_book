#include<stdio.h>
int add(int a,int b){
	return a+b;	
}
int multi(int a, int b){
	return a*b;
}

int main(){
	int choose,a,b;
	printf("�п�J 1 �� 2 ��ܭp��覡\n1 : �[�k�B��\n2 : ���k�B��\n=> ");
	scanf("%d",&choose);
	printf("�п�J��ƭ� : ");
	scanf("%d%d",&a,&b);
	if (choose == 1){
		printf("%d + %d = %d",a,b,add(a,b));
	}else if(choose == 2){
		printf("%d * %d = %d",a,b,multi(a,b));
	}else{
		printf("�p��覡��ܿ��~");
	}
	
	return 0;
}
