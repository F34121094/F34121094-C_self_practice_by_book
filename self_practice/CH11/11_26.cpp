#include<stdio.h>

int main(){
	int num[5] = {3,6,7,5,9};
	int *ptr = num;
	int sum = 0;
	ptr = num;
	printf("num位址 %X\n",num);
	printf("ptr位址 %X\n",ptr);
	int l = sizeof(num)/sizeof(num[1]);
	for(int i = 0;i < l;i++){
		sum += *ptr++;
	}
	printf("\n方法 1  陣列總和 %d\n",sum);
	printf("num位址 %X\n",num);
	printf("ptr位址 %X\n",ptr);
	ptr = num;
	sum =0;
	for(int i = 0;i<l;i++){
		sum += *(ptr+i);
	}
	printf("\n方法 2  陣列總和 %d\n",sum);
	printf("num位址 %X\n",num);
	printf("ptr位址 %X\n",ptr);
	
	return 0;
}
