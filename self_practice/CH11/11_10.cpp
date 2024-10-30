#include<stdio.h>

int main(){
	int i,k;
	int *ptr;
	printf("&i = %X \t &k = %X \t &ptr = %X\n",&i,&k,&ptr);
	i = 5;
	printf("執行前 i = %d",i);
	printf("*ptr = %d\t ptr = %X\t &ptr = %X", *ptr, ptr, &ptr);
	k = 10;
	*ptr = k;
	printf("*ptr = %d\t ptr = %X\t &ptr = %X",*ptr,ptr,&ptr);
	printf("執行後 i = %d",i);
	
	return 0;
}
