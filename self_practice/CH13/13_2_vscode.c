#include<stdio.h>

int main(){
	struct student{
		char name[20];
		char phone[20];
		int math;
	}stu;
	printf("請輸入姓名 : ");
	scanf("%s",&stu.name);
	printf("請輸入手機號碼 : ");
	scanf("%s",&stu.phone);
	printf("請輸入數學成績 : ");
	scanf("%d",&stu.math);
	printf("\nHello~ %s 歡迎\n",stu.name);
	printf("手機號碼 : %s\n",stu.phone);
	printf("數學成績 : %d",stu.math);
	
	return 0;
}