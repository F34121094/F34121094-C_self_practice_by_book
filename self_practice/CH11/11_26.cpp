#include<stdio.h>

int main(){
	int num[5] = {3,6,7,5,9};
	int *ptr = num;
	int sum = 0;
	ptr = num;
	printf("num��} %X\n",num);
	printf("ptr��} %X\n",ptr);
	int l = sizeof(num)/sizeof(num[1]);
	for(int i = 0;i < l;i++){
		sum += *ptr++;
	}
	printf("\n��k 1  �}�C�`�M %d\n",sum);
	printf("num��} %X\n",num);
	printf("ptr��} %X\n",ptr);
	ptr = num;
	sum =0;
	for(int i = 0;i<l;i++){
		sum += *(ptr+i);
	}
	printf("\n��k 2  �}�C�`�M %d\n",sum);
	printf("num��} %X\n",num);
	printf("ptr��} %X\n",ptr);
	
	return 0;
}
