#include<stdio.h>

int main(){
	int n;
	printf("�п�J�ǥͤH�� ==>");
	scanf("%d",&n);
	int sum = 0;
	int fail = 0;
	int current;
	for (int i = 0;i<n;i++){
		printf("��J���Z : ");
		scanf("%d",&current);
		sum += current;
		if (current<60){
			fail += 1;
		}
	}
	printf("�������Z�O : %.2f\n",(float)sum / n);
	printf("���ή�H�� : %d",fail); 
	return 0;
}
