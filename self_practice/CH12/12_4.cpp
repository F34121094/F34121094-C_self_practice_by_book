#include<stdio.h>
void swap(int *p1,int *p2){
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
	
	return;
}

int main(){
	int a = 10;
	int b = 7;
	printf("a = %d, b= %d\n",a,b);
	printf("====================\n");
	swap(&a,&b);
	printf("a = %d, b = %d",a,b);
	
	return 0;
}
