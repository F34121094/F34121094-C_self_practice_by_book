#include<stdio.h>
#include<math.h>

int main(){
	int sum = 0;
	for(int i = 0 ; i < 30; i++){
		sum += pow(2,i);
	}
	printf("³Á²ÉÁ`¦@ = %d",sum);
	
	return 0;
}
