#include<stdio.h>

int main(){
	char s;
	printf("�п�J���Z : ");
	scanf("%c",&s);
	switch(s){
		case'a':
		case'A':
			printf("Excellent");
			break;
		case'b':
		case'B':
			printf("Good");
			break;
		case'C':
		case'c':
			printf("Pass");
			break;
		case'd':
		case'D':
			printf("Not Good");
			break;
		case'f':
		case'F':
			printf("Fail");
			break;
		default:
			printf("��J���~!");
			break;
	}
	return 0;
}
