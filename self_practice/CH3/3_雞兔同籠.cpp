#include<stdio.h>

int main(){
	int head,foot;
	int x,y;	//x�� y�� 
	
	printf("�п�J�Y���ƶq : ");
	scanf("%d",&head);
	printf("�п�J�}���ƶq : ");
	scanf("%d",&foot);
	x = (int)(foot-2*head)/2;
	y = head - x;
	printf("���� %d �ӡA�ߦ� %d ��",y,x);
	
	return 0;
}
