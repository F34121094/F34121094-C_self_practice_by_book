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
	puts("�����իe");
	printf("x = %d\ty = %d",x,y);
	int data[2];
	data[0] = x;
	data[1] = y;
	change(data);
	puts("\n�����ի�\n");
	printf("x = %d\ty = %d",data[0],data[1]);
	
	return 0;
}
