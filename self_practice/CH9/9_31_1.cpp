#include<stdio.h>
int av(int data[]){
	data[4] = (int)((data[0]+data[1]+data[2])/3);
	return data[4];
}

int main(){
	int data[4];
	
	printf("�е��ڤT�Ӿ��\n==> ");
	scanf("%d%d%d",&data[0],&data[1],&data[2]);
	printf("������ : %d",av(data));
	
	return 0;
} 
