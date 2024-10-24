#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	
	for (int i = 1;i<11;i++){
		printf("»ë¤l­È%d : %d\n",i, rand%6);
	}
	return 0;
}
