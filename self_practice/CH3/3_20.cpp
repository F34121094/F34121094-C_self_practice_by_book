#include<stdio.h>
#include<stdlib.h>

int main(){
	char ch1, ch2,ch3;
	
	printf("�п�J��Ӧr��\n");
	ch1 = getchar();
	ch2 = getchar();
	printf("�Ĥ@�� => \n");
	putchar(ch1);
	printf("\n�ĤG�� => \n");
	putchar(ch2);
	fflush(stdin);
	printf("\n�п�J�@�Ӧr��\n");
	ch3 = getchar();
	printf("�ĤT�� => \n");
	putchar(ch3);

	return 0;
} 
