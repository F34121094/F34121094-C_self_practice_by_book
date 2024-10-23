#include<stdio.h>

int main(){
	float x,y;
	printf("請輸入身高(公分) : ");
	scanf("%f",&y);
	printf("請輸入體重(公斤) : ");
	scanf("%f",&x);
	float re = x / ((y/100 )*(y/100 ));
	if (re < 18.5){
		printf("體重過輕");
	}else if (re >= 18.5 && re < 24){
		printf("體重正常");
	}else if (re >= 24 && re < 28){
		printf("體重超重");
	}else{
		printf("體重肥胖");
	}
	return 0;
}
