#include<stdio.h>

int main(){
	int magic[4][4]={
	{4,6,8,10},
	{12,14,16,18},
	{20,22,24,26},
	{28,30,32,34}};
	int max = magic[0][0] + magic[3][3];
	for (int i = 0 ;i <4 ;i++){
		for (int j = 0;j<4;j++){
			if (i==j || i ==(3-j)){
				magic[i][j] = max - magic[i][j];
			}
		}
	}
	
	for (int i = 0 ;i <4 ;i++){
		for (int j = 0;j<4;j++){
			printf("%3d",magic[i][j]);
		}
		printf("\n");
	}
	return 0;
}
