#include<stdio.h>
int add(int n){
	int total = 0;
	for (int i = 1; i<=n;i++){
		total += i;
	}
	return total;
}

int main(){
	int n;
	printf("�п�J�t�C�[�`�� : ");
	scanf("%d",&n);
	printf("�q 1 �[�� %d = %d",n,add(n));
	
	return 0;
}
