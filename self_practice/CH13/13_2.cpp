#include<stdio.h>

int main(){
	struct student{
		char name[20];
		char phone[20];
		int math;
	}stu;
	printf("�п�J�m�W : ");
	scanf("%s",&stu.name);
	printf("�п�J������X : ");
	scanf("%s",&stu.phone);
	printf("�п�J�ƾǦ��Z : ");
	scanf("%d",&stu.math);
	printf("\nHello~ %s �w��\n",stu.name);
	printf("������X : %s\n",stu.phone);
	printf("�ƾǦ��Z : %d",stu.math);
	
	return 0;
}
