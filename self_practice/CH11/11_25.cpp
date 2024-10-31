#include<stdio.h>

int main(){
	int num[5] = {3,6,7,5,9};
	for(int i = 0;i<5;i++){
		printf("num[%d] = %d\t*(num+%d) = %d\n",i,num[i],i,*(num+i));
	}
	return 0;
}
