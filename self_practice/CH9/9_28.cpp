#include<stdio.h>
void change(int data[]){
	int t;
	t = data[0];
	data[0] = data[1];
	data[1] = t;
}
int main(){
	int x = 6;
	int y = 1;
	puts("執行對調前");
	printf("x = %d\ty = %d",x,y);
	int data[2];
	data[0] = x;
	data[1] = y;
	change(data);
	puts("\n執行對調後\n");
	printf("x = %d\ty = %d",data[0],data[1]);
	
	return 0;
}
