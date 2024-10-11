#include<stdio.h>

int main(){
	int x,y,z;
	x = y = z = 5;
	x -= ++y + z--;
	printf("a(x) = %d\n",x);
	z = x = y = 5;
	x *= y - z--;
	printf("b(x) = %d\n",x);
	z = x = y = 5;
	x /= 2 + y++ - z++;
	printf("c(x) = %d",x);
	
	return 0;
}
