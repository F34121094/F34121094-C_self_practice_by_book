#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	char ch;
	
	printf("�п�J 1 �Ӿ��\n==>");
	scanf("%d",&i);
	fflush(stdin);	//�γo�ӥi�H�M�Žw�İ� 
	printf("�п�J 1 �Ӧr��\n==>");
	scanf("%c",&ch);
	
	printf("��ƬO %d , Ascii�X�O %d , �r���O %c",i,ch,ch);
	
	return 0;
}
