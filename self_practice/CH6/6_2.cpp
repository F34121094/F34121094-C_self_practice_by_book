#include<stdio.h>

int main(){
	int sum = 0;
	for(int i = 1;i<101;i++){
		sum += i;
	}
	printf("1 + 2 + 3 + ... + 100 = %d",sum);
	
	return 0;
} 
