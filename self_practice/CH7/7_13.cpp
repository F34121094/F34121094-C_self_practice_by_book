#include<stdio.h>

int main(){
	int arr1[3][3],arr2[3][3];
	
	printf("�п�J�Ĥ@�Ӱ}�C\n");
	for (int i = 0; i<3;i++){
		for (int j = 0; j<3;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("�п�J�ĤG�Ӱ}�C\n");
	for (int i = 0; i<3;i++){
		for (int j = 0; j<3;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("��Ӱ}�C���X\n");
	for (int i = 0; i<3;i++){
		for (int j = 0; j<3;j++){
			printf("%3d", arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
