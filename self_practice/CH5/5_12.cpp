#include<stdio.h>

int main(){
	char c;
	printf("A : Access	......\n");
	printf("B : Excel	......\n");
	printf("C : Word	......\n");
	printf("�п�� ==> ");
	scanf("%c", &c);
	
	switch(c){
		case'a':
		case'A':
			printf("Access ����ѳn��\n");
			break;
		case'b':
		case'B':
			printf("Excel ���պ��n��\n");
			break;
		case'c':
		case'C':
			printf("Word ����ѳB�z�n��\n");
			break;
		default:
			printf("��J���~");
			break;
	}
	
	return 0;
}
