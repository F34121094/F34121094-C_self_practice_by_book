#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int main(){
	srand(time(NULL));
	for ( int i = 1; i<6;i++){
		printf("ÀH¾÷¼Æ %d = %d",i,rand());
		sleep(1);
	}
	
	return 0;
}
