#include<stdio.h>
void Sum(int (*ptr)[5],int row){
	int max;
	int total = 0;
	for(int i = 0 ; i < row ; i++){
		max = *(*(ptr+i));
		for(int j = 0; j < 5 ; j++){
			if(max < *(*(ptr+i)+j)){
				max = *(*(ptr+i)+j);
				
			}
		}
		printf("row(%d) ���̤j�Ȭ� %d\n",i+1,max);
		total += max;
	}
	printf("�̤j�Ȫ��[�`�� %d",total);
	
	return;
}

int main(){
	int n[][5] = {{5,8,4,10,2},
	{11,18,17,16,19},
	{26,23,29,27,20}};
	
	int row = 3;
	printf("Sum()�����I�s\n==>\n");
	Sum(n,row);
	return 0;
}
