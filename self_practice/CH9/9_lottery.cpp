#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generate(){
	srand(time(NULL));
	int n = rand()%10;
	return n+1;
}

int main(){
	int n = generate();
	printf("�A��쪺���X�O %d\n",n);
	switch(n){
		case 1:
			printf("�T���@��");
			break;
		case 2:
			printf("60�T�G���q���@�x");
			break;
		case 3:
			printf("iPhone 14 �@�x");
			break;
		case 4:
			printf("�{���T�U��");
			break;
		case 5:
			printf("�{���@�U��");
			break;
		default:
			printf("���¥��{");
			break;
	}
	return 0;
}

