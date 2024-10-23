#include<stdio.h>

int main(){
	for(int i = 97;i < 123; i++){
		printf("%3d = %c  \t",i,i);
		if ((i-96)%5 == 0){
			printf("\n");
		}
	}
	return 0;
}
