#include<stdio.h>
#include<string.h>

int cal(char s[]){
	int l = strlen(s);
	return l;
}

int main(){
	char str[50];
	printf("�п�J�r�� : ");
	scanf("%s",str);
	printf("�r����� : %d",cal(str));
	
	return 0;
}
