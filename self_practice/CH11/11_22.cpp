#include<stdio.h>

int main(){
	int ary[5] = {3,6,7,5,9};
	printf("num���e = %X\n",ary);
	for(int i = 0; i< 5; i++){
		printf("num[%d] = %d\t ��} = %X\n",i,ary[i], &ary[i]);
	}
	
	return 0;
} 
