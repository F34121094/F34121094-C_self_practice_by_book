#include<stdio.h>
#include<string.h>
void reverse(char str[50],int l){
	for(int i = l-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return;
}

int main(){
	char str[50];
	printf("�п�J�@�Ӧr�� \n==> ");
	scanf("%s",str);
	int l = strlen(str);
	reverse(str,l);
	
	return 0;
}
