#include<stdio.h>
#include<string.h>
void send(char data[],int l){
	printf("-------------------\n");
	printf("傳入的data陣列位址 %p\n",data);
	printf("傳入的data內容\n==> \n");
	for (int i = 0;i<l;i++){
		printf("data[%d] = %d\t位址 = %p\n",i,data[i],data[i]);
	}
	return;
}

int main(){
	char data[] = {5,6,7,9,0};
	
	int l = sizeof(data)/sizeof(data[0]);
	printf("data 陣列位址 = %p\n",data);
	printf("輸出陣列內容 \n==> \n");
	for (int i = 0;i<l;i++){
		printf("data[%d] = %d\t位址 = %p\n",i,data[i],data[i]);
	}
	printf("\n");
	send(data,l);
	
	return 0;
}
