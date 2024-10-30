#include<stdio.h>

int main(){
	int val,i;
	i = 20;
	int *ptr = &i;
	val = *ptr;
	printf("*ptr = %d\n",*ptr);
	printf("val  = %d\n",val);
	printf("&i = %d\n",&i);
	printf("&val = %d\n",&val);
	printf("&ptr = %d",&ptr);
	
	return 0;
}
