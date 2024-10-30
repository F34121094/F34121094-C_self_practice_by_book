#include<stdio.h>

int main(){
	int x = 6;
	int *ptr = &x;
	
	printf("x = %d\n",x);
	printf("ptr = %d\n",ptr);
	printf("*ptr = %d", *ptr);
	
	return 0;
}
