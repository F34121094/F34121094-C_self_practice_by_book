#include<stdio.h>

int main(){
	int sc[5];
	printf("��J 0 �N���J����\n");
	int i = 0;
	int sum = 0;
	while (1){
		printf("�п�J���Z ==> ");
		scanf("%d",&sc[i]);
		if (sc[i] == 0){
			break;
		}
		sum += sc[i++];
		if(i == 5){
			printf("�}�C�w��\n");
			break;
		}
	}
	printf("�������ƬO %.2f",(float)sum / (float)i);
}
