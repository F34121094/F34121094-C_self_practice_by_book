#include<stdio.h>

int main(){
	int sc[10];
	int total = 0;
	printf("��J 0 �N���J����\n");
	int i = 0;
	while(1){
		printf("�п�J���� ==> ");
		scanf("%d", &sc[i]);
		if(sc[i] == 0){
			break;
		}
		total += sc[i++];
	}
	printf("�������ƬO %.2f",(float)total/(float)i);
	
	return 0; 
}
