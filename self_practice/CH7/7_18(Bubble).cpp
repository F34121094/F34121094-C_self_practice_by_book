#include<stdio.h>

int main(){
	int num[] = {3,6,7,5,9};
	int temp;
	for (int i = 4;i>=0;i--){
		for(int j = 0;j < i;j++){
			if (num[j] > num[j+1]){
			temp = num[j];
			num[j] = num[j+1];
			num[j+1] = temp;
			}
		}
	}
	for (int i = 0;i<5;i++){
		printf("%3d",num[i]);
	}
	
	return 0;
}
