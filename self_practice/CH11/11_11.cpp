#include<stdio.h>

int main(){
	int x = 10;
	int y = 20;
	int tmp;
	int *ptrx, *ptry;
	printf("&x = %X\t&y = %X\t&tmp = %X\t&ptrx = %X\t&ptry = %X\n",&x,&y,&tmp,&ptrx,&ptry);
	printf("\n��ƥ洫�e\n");
	printf("x= %d, y = %d\n\n",x,y);
	ptrx = &x;
	ptry = &y;
	tmp = *ptrx;
	*ptrx = *ptry;
	*ptry = tmp;
	printf("��ƥ洫��\n");
	printf("x= %d, y = %d\n\n",x,y);
	
	return 0;
}
