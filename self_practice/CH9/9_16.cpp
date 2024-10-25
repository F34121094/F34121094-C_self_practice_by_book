#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void put(int n){
	if (n == 0){
		printf("%d",n);
		return;
	}else{
		printf("%d ",n);
		return put(n-1);
	}
}

int main(){
	put(5);
	
	return 0;
}
