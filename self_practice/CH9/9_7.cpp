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
	printf("請輸入重複次數 : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("請輸入輸出字元 : ");
	scanf("%c",&c);
	printf("結果 == >");
	loop(n,c);
	
	return 0;
}
