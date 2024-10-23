#include<stdio.h>

int main(){
	int x;
	char ch;
	printf("你是否需要駕照(y/n) ");
	scanf("%c",&ch);
	if (ch == 'y'){
		printf("你幾歲 ");
		scanf("%d",&x);
		if (x >= 18){
			printf("你需要考駕照\n");
		}else{
			printf("對不起你年齡太小了\n");
		}
	}else{
		printf("掰掰~");
	}
	return 0;
} 
