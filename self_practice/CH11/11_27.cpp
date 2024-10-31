#include<stdio.h>

int main(){
	int num[10];
	int *ptr;
	ptr = num;
	int n;
	printf("請輸入陣列元素個數(<10) : ");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("請輸入第 %d 個陣列元素內容 : ",i+1);
		scanf("%d",ptr+i);
	}
	for(int i = 0;i<n;i++){
		printf("輸出num[%d] = %d\n",i,num[i]);
	}
	
	return 0;
}
