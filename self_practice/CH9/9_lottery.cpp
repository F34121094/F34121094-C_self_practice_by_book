#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generate(){
	srand(time(NULL));
	int n = rand()%10;
	return n+1;
}

int main(){
	int n = generate();
	printf("你抽到的號碼是 %d\n",n);
	switch(n){
		case 1:
			printf("汽車一輛");
			break;
		case 2:
			printf("60吋液晶電視一台");
			break;
		case 3:
			printf("iPhone 14 一台");
			break;
		case 4:
			printf("現金三萬元");
			break;
		case 5:
			printf("現金一萬元");
			break;
		default:
			printf("謝謝光臨");
			break;
	}
	return 0;
}

