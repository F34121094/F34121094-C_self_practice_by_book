#include<stdio.h>

int main(){
	int ans = 10;
	int respond;
	int time = 0;
	while (1){
		time ++;
		printf("�п�J���q�Ʀr : ");
		scanf("%d", &respond);
		if (respond == ans){
			break;
		}
	}
	printf("�� %d ���q��",time);
	return 0;
}
