#include<stdio.h>

void lager(int a,int b){
	if(a==b){
		printf("��ƭȬ۵�");
	}else if(a < b){
		printf("���j�Ȭ� %d",b);
	}else{
		printf("���j�Ȭ� %d",a);
	}
	return;
}

int main(){
	int a,b;
	printf("�п�J��ƭ�\n==> ");
	scanf("%d%d",&a,&b);
	lager(a,b);
	
	return 0; 
} 
