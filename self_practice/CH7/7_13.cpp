#include<stdio.h>

int main(){
	int arr1[3][3],arr2[3][3];
	
	printf("請輸入第一個陣列\n");
	for (int i = 0; i<3;i++){
		for (int j = 0; j<3;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("請輸入第二個陣列\n");
	for (int i = 0; i<3;i++){
		for (int j = 0; j<3;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("兩個陣列的合\n");
	for (int i = 0; i<3;i++){
		for (int j = 0; j<3;j++){
			printf("%3d", arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
