#include<stdio.h>
int sum(int n){
	if (n == 1){
		return 1;
	}else{
		return n + sum(n-1);
	}
}

int main(){
	printf("Total = %d",sum(10));
	
	return 0;
}
