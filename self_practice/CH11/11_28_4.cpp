#include<stdio.h>

int main(){
	int n[][3] = {{1,2,3},
	{4,5,6}};
	int row,col;
	row = sizeof(n)/sizeof(n[0]);
	col = sizeof(n[0])/sizeof(n[0][0]);
	int *ptr = n[0];
	for(int i = 0; i < col*row;i++){
		printf("n[i][j] = %X\t = %d\n",ptr+i,*(ptr+i));
	}
	
	return 0;
}
