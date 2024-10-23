#include<stdio.h>

int main(){
	int i,j;
	i = 5;
	
	while (i<=9){
		j = 1;
		while(j++ <= (9-i)){
			printf(" ");
		}
		j = 9;
		while ((j++ - i) < i){
			printf("A");
		}
		i++;
		printf("\n");
	}
	return 0;
}
