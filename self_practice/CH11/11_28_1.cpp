#include<stdio.h>

int main(){
	int n[][3] = {{1,2,3},
	{4,5,6}};
	int row,col;
	row = sizeof(n)/sizeof(n[0]);
	col = sizeof(n[0])/sizeof(n[0][0]);
	printf("n[i][j] �榡���O�����}\n");
	for(int i = 0 ;i < row;i++){
		for(int j = 0;j<col;j++){
			printf("n[%d][%d] = %X\t",i,j,&n[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
