#include<stdio.h>

int main(){
	int sum = 0;
	printf(" i	sum\n");
	printf("-----------\n");
	for (int i = 1;i<11;i++){
		sum += i;
		printf("%2d	%2d\n",i,sum);
	}
	
	return 0 ;
}
