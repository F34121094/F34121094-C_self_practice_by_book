#include<stdio.h>

int main(){
	int apple = 100;
	int student = 23;
	int time = 0;

	printf("蘋果可以吃 %d 天\n",(int)apple/student);
	printf("第 %d 天會不夠\n",(int)apple/student + 1);
	printf("蘋果會不足 %d 顆", 23 - (apple%student));
	
	return 0;
	
}
