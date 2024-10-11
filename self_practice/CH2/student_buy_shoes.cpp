#include<stdio.h>
#include<stdlib.h>

int main(){
	int size;
	float foot = 7.5;
	
	size = (int)foot + 1;
	printf("你腳的尺寸是 : %2.1f\n", foot);
	printf("你購買的鞋子大小是 : %d\n",size);
	system("pause");	//system("pause")按任意按鍵繼續 
	
	return 0;
	
}
