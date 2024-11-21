#include<stdio.h>

int main(){
	struct student{
		char name[10];
		char ID[10];
		char gender;
		int math;
	};
	struct student stu = {.name = "廖元維" , .gender = 'M' , .math = 98};
	printf("歡迎~ %s",stu.name);
	printf("\n性別 : %c",stu.gender);
	printf("\n數學成績 : %d",stu.math);
	
	return 0;
}
