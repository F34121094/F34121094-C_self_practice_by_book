#include<stdio.h>

int main(){
	int num[10];
	int *ptr;
	ptr = num;
	int n;
	int total = 0;
	printf("�п�J�}�C�����Ӽ� : ");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("�п�J�� %d �Ӱ}�C�������e : ",i+1);
		scanf("%d",ptr+i);
		total += *(ptr+i);
	}
	printf("�}�C���`�X�� %d",total);
	
	return 0;
}
