#include<stdio.h>

int main(){
	int i,j;
	
start:
	printf("�п�J 2 �ӼƦr ==>\n");
	scanf("%d %d",&i,&j);
	if (i>j){
		goto stop;		
	}else{
		goto start;
	}
stop:
	printf("�{������");
	return 0;
} 
