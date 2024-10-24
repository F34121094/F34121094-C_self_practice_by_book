#include<stdio.h>

int main(){
	int i;
	int sc[5];
	
	sc[0] = 5;
	sc[1] = 12;
	sc[2] = 45;
	sc[3] = 42343;
	sc[4] = -8934;	//這邊如果沒有設定的話，會輸出記憶體殘值 
	
	for (int i = 0; i<5; i++){
		printf("sc[%d] = %5d\n",i,sc[i]);
	}
	
	return 0;
} 
