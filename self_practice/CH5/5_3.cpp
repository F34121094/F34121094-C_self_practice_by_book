#include<stdio.h>

int main(){
	int x;
	printf("�п�J��ƭ� : ");
	scanf("%d",&x);
	if (x<0){
		x = -x;
	}
	printf("����� : %d",x);
	
	return 0;
} 
