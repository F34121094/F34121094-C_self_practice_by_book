#include<stdio.h>

int main(){
	int num[10];
	int *ptr;
	ptr = num;
	int n;
	printf("�п�J�}�C�����Ӽ�(<10) : ");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("�п�J�� %d �Ӱ}�C�������e : ",i+1);
		scanf("%d",ptr+i);
	}
	for(int i = 0;i<n;i++){
		printf("��Xnum[%d] = %d\n",i,num[i]);
	}
	
	return 0;
}
