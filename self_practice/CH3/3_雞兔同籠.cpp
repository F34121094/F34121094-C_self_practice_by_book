#include<stdio.h>

int main(){
	int head,foot;
	int x,y;	//x雞 y兔 
	
	printf("請輸入頭的數量 : ");
	scanf("%d",&head);
	printf("請輸入腳的數量 : ");
	scanf("%d",&foot);
	x = (int)(foot-2*head)/2;
	y = head - x;
	printf("雞有 %d 個，兔有 %d 個",y,x);
	
	return 0;
}
