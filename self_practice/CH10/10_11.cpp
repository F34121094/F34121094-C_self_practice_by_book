#include<stdio.h>
#define Change(a,b) {\
int t;\
t = a;\
a = b;\
b = t;\
}
int main(){
	int x = 10;
	int y = 20;
	printf("執行對調前\n");
	printf("x = %d\ty = %d",x,y);
	Change(x,y);
	
	printf("\n\n執行對調後\n");
	printf("x = %d\ty = %d",x,y);
	
	return 0;
}
