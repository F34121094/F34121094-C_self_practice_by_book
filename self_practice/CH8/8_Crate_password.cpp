#include<stdio.h>
#include<string.h>
int main(){
	char pass[15];
	int len;
	printf("�Ыإ߱K�X : ");
	scanf("%s",pass);
	len = strlen(pass);
	if(len < 6){
		printf("�K�X���פӵu");
	}else if (len > 10){
		printf("�K�X���פӪ�");
	}else{
		printf("�إ߱K�X OK");
	}
	
	return 0;
}
