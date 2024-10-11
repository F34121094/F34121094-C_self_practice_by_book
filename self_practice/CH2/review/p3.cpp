#include<stdio.h>

int main(){
	int x,y,z;
	x = 10;
	y = 18;
	z = 5;
	float s;
	s = x+y;
	printf("a = %5.2f\n",s);
	s = 2*x+3-z;
	printf("b = %5.2f\n",s);
	s = y*z + 20/y;
	printf("c = %5.2f\n", s);
	s =  -x + z - 3;
	printf("d = %5.2f",s);
	
	return 0;
}
