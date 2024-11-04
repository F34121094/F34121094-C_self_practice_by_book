#include<stdio.h>
void address(int *ptr){
	printf("Address of ptr = %X\nValue = %d",ptr,*ptr);
	
	return;
}

int main(){
	int x = 10;
	int *ptr = &x;
	
	printf("x   address = %X\n",&x);
	printf("ptr address = %X\n", ptr);
	printf("©I¥s address\n");
	address(ptr);
	
	return 0;
}
