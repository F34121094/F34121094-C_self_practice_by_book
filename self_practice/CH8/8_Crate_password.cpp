#include<stdio.h>
#include<string.h>
int main(){
	char pass[15];
	int len;
	printf("請建立密碼 : ");
	scanf("%s",pass);
	len = strlen(pass);
	if(len < 6){
		printf("密碼長度太短");
	}else if (len > 10){
		printf("密碼長度太長");
	}else{
		printf("建立密碼 OK");
	}
	
	return 0;
}
