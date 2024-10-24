#include<stdio.h>

int main(){
	float total = 0.0;
	float height = 100.0;
	
	for(int i = 1; i< 11;i++){
		total += height;
		height /= 2.0;
		total += height;
	} 
	printf("第 10 次落地行經距離 %f\n", total);
	printf("第 10 次落地反彈高度 %f", height);
	
	return 0;
}
