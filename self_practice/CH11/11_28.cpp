#include<stdio.h>

int main(){
	int num[10];
	int *ptr;
	ptr = num;
	int n;
	int total = 0;
	printf("請輸入陣列元素個數 : ");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("請輸入第 %d 個陣列元素內容 : ",i+1);
		scanf("%d",ptr+i);
		total += *(ptr+i);
	}
	printf("陣列的總合為 %d",total);
	
	return 0;
}
