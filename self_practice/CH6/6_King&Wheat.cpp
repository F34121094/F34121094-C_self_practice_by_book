#include<stdio.h>
#include<math.h>

int main(){
	int sum = 0;
	for(int i = 0 ; i < 30; i++){
		sum += pow(2,i);
	}
	printf("�����`�@ = %d",sum);
	
	return 0;
}
