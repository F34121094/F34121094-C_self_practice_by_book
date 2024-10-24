#include<stdio.h>

int main(){
	int sc[2][3]=
	{{90,80,95},
	{95,90,85}};
	
	for(int i = 0;i<2;i++){
		for (int j = 0; j<3;j++){
			printf("學生 %d 的第 %d 個科目成績為 %d\n",i+1,j+1,sc[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
