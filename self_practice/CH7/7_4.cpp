#include<stdio.h>

int main(){
	int a[3] = {1,2,3};
	int b[] = {1,2,3,4,5};	//可以不宣告需要幾個空間 
	int c[3] = {5};	//給他空間待沒有宣告的話會自動填 0 
	printf("a 陣列 =>\n");
	for (int i = 0;i<3;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\nb 陣列 =>\n");
	for (int i = 0;i<5;i++){
		printf("b[%d] = %d\n",i,b[i]);
	}
	printf("\nc 陣列 =>\n");
	for (int i = 0;i<3;i++){
		printf("c[%d] = %d\n", i,c[i]);
	}
	
	return 0;
} 
