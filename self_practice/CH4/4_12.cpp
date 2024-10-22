// fmod(x,y) 求浮點數的餘數
#include<stdio.h>
#include<math.h>

int main(){
	float x = 3.6;
	float y = 2.4;
	float z;
	z = fmod(x,y);
	printf("%.2f", z);
	return 0;
} 
