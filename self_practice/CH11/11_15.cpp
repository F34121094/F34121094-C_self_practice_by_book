#include<stdio.h>

int main(){
	int x;
	int *ptr;
	ptr = &x;
	printf("�п�J��� : ");
	scanf("%d",ptr);
	printf("�A����J�O : %d",*ptr);
	
	return 0;
}
