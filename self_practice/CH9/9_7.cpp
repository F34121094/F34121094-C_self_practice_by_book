#include<stdio.h>

void loop(int n,char c){
	for ( int i = 0;i<n;i++){
		if(i%10==0){
			printf("\n");
		}
		printf("%c",c);
	}
	return;
}

int main(){
	int n;
	char c;
	printf("�п�J���Ʀ��� : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("�п�J��X�r�� : ");
	scanf("%c",&c);
	printf("���G == >");
	loop(n,c);
	
	return 0;
}
