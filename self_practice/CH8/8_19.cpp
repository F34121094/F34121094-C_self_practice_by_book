#include<stdio.h>
#include<string.h>

int main(){
	char fruit[3][10];
	
	for(int i = 0; i<3; i++){
		printf("�п�J���G : ");
		scanf("%s",fruit[i]);
	}
	printf("�A��J�����G�p�U : \n");
	for (int i = 0; i< 3;i++){
		puts(fruit[i]);
	}
	
	return 0;
}
