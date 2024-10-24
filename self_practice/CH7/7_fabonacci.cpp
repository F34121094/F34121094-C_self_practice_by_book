#include<stdio.h>

int main(){
	int arr[10] = {0,1};
	for(int i = 2;i<10;i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	printf("fibonacci 數列數字如下\n");
	for(int i = 0;i<10;i++){
		printf("%3d",arr[i]);
	}
	return 0;
}
