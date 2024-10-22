#include<stdio.h>
#include<math.h>

int main(){
	double x = 30;
	double r;
	double pi = 3.14159;
	r = x*2*pi/360;
	printf("sin(x) = %.2f\n", sin(r));  
	printf("cos(x) = %.2f\n", cos(r));  
	printf("tan(x) = %.2f", tan(r));  
	
	return 0;
}
