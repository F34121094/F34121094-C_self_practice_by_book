#include<stdio.h>

int main(){
	int n;
	int sc[10];
	int sum = 0;
	printf("�п�J�ǥͤH�� ==> ");
	scanf("%d", &n);
	
	for(int i = 0;i<n;i++ ){
		printf("�п�J���� ==> ");
		scanf("%d",&sc[i]);
		sum += sc[i];
	}
	printf("�������ƬO %.2f", (float)sum / (float)n);
}
