#include<stdio.h>

int main(){
	struct student{
		char name[10];
		char ID[10];
		char gender;
		int math;
	};
	struct student stu = {.name = "������" , .gender = 'M' , .math = 98};
	printf("�w��~ %s",stu.name);
	printf("\n�ʧO : %c",stu.gender);
	printf("\n�ƾǦ��Z : %d",stu.math);
	
	return 0;
}
