#include<stdio.h>

int main(){
	float i;
	i = 123.56;
	printf("/%f/\n",i);
	printf("/%3.2f/\n",i);
	printf("/%8.2f/\n",i);
	printf("/%-8.2f/\n",i);
	printf("/%+8.2f/\n",i);
	printf("/%08.2f/\n",i);
	
	return 0;
} 
