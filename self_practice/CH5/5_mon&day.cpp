#include<stdio.h>

int main(){
	int mon;
	printf("�п�J��� : ");
	scanf("%d",&mon);
	switch(mon){
		case 2:
			printf("%d �릳 28 ��",mon);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d �릳 31 ��", mon);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d �릳 30 ��", mon);
			break;
		default:
			printf("��J���~");
			break;
	}
	
	return 0;
}
