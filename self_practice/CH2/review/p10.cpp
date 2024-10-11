#include<stdio.h>

int main(){
	int x,y,z;
	x = y = z = 5;
	x += y + z++;
	printf("a(x) = %d\n",x);
	z = x = 5;
	x += y + ++z;
	printf("b(x) = %d",x);
	
	return 0;
}
