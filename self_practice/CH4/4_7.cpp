//exp(x) 可以傳回以 e 為底的 x 次方值
#include<stdio.h>
#include<math.h>

int main(){
	double x = 1.0;
	double y = 2.0;
	
	printf("exp(1.0) = %.2f\n", exp(x));
	printf("exp(2.0) = %.2f", exp(y));
	
	return 0;
} 
