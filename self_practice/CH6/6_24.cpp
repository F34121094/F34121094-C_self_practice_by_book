#include<stdio.h>
#include<stdlib.h>

int main(){
	int r;
	srand(10);
	
	for (int i = 0; i<6; i++){
		printf("�H���� %d = %d\n",i,rand());
	}
	return 0;
}
