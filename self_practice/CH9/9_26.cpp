#include<stdio.h>
#include<string.h>
void send(char data[],int l){
	printf("-------------------\n");
	printf("�ǤJ��data�}�C��} %p\n",data);
	printf("�ǤJ��data���e\n==> \n");
	for (int i = 0;i<l;i++){
		printf("data[%d] = %d\t��} = %p\n",i,data[i],data[i]);
	}
	return;
}

int main(){
	char data[] = {5,6,7,9,0};
	
	int l = sizeof(data)/sizeof(data[0]);
	printf("data �}�C��} = %p\n",data);
	printf("��X�}�C���e \n==> \n");
	for (int i = 0;i<l;i++){
		printf("data[%d] = %d\t��} = %p\n",i,data[i],data[i]);
	}
	printf("\n");
	send(data,l);
	
	return 0;
}
