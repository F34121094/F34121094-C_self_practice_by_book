#include<stdio.h>

int main(){
	int i ;
	i = 356;
	printf("/%d/\n",i);
	printf("/%2d/\n",i);	//指定的空間比數字需要的空間還小時，會直接忽略 
	printf("/%5d/\n",i);
	printf("/%-5d/\n",i);
	printf("/%+5d/\n",i);
	printf("/%05d/\n",i);	//在前面加0代表把剩下的空間全部都填入0 
	
	return 0;
} 
