#include<stdio.h>
#include<string.h>

int main(){
	char fruit[3][10];
	
	for(int i = 0; i<3; i++){
		printf("請輸入水果 : ");
		scanf("%s",fruit[i]);
	}
	printf("你輸入的水果如下 : \n");
	for (int i = 0; i< 3;i++){
		puts(fruit[i]);
	}
	
	return 0;
}
