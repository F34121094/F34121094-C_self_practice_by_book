#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	for (int i = 1; i<6; i++){
		printf("�H���� %d = %d\n",i,rand());
	}
	
	return 0;
}
