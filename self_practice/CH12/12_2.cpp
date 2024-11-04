#include<stdio.h>
int sum(int *p1, int *p2){
	return *p1+*p2;
}
int main(){
	int x = 10;
	int y = 5;
	printf("sum of (x + y) = %d",sum(&x,&y));
	
	return 0;
}
