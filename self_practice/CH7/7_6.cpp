#include<stdio.h>

int main(){
	int a[5];
	float b[5];
	double c[5];
	
	printf("a[5](int) 的記憶體空間為 %d\n",sizeof(a));
	printf("b[5](float)  的記憶體空間為 %d\n",sizeof(b));
	printf("c[5](double) 的記憶體空間為 %d",sizeof(c));
	
	return 0;
} 
