#include<stdio.h>

int main(){
	float x,y;
	printf("�п�J����(����) : ");
	scanf("%f",&y);
	printf("�п�J�魫(����) : ");
	scanf("%f",&x);
	float re = x / ((y/100 )*(y/100 ));
	if (re < 18.5){
		printf("�魫�L��");
	}else if (re >= 18.5 && re < 24){
		printf("�魫���`");
	}else if (re >= 24 && re < 28){
		printf("�魫�W��");
	}else{
		printf("�魫�έD");
	}
	return 0;
}
