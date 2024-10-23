#include<stdio.h>

int main(){
	float speed;
	printf("請輸入火箭速度 : ");
	scanf("%f",&speed);
	
	if (speed >= 16.7){
		printf("人造衛星可脫離太陽系");		
	}else if (speed >= 11.2){
		printf("人造衛星可環繞太陽移動");
	}else if (speed > 7.9){
		printf("人造衛星可環繞地球做橢圓運動");
	}else if (speed == 7.9){
		printf("人造衛星可環繞地球座圓形運動");
	}else{
		printf("人造衛星無法進入太空");
	}
	
	return 0;
	
	return 0;
}
