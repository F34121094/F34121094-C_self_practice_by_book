#include<stdio.h>

int main(){
	int n;
	printf("請輸入學生人數 ==>");
	scanf("%d",&n);
	int sum = 0;
	int fail = 0;
	int current;
	for (int i = 0;i<n;i++){
		printf("輸入成績 : ");
		scanf("%d",&current);
		sum += current;
		if (current<60){
			fail += 1;
		}
	}
	printf("平均成績是 : %.2f\n",(float)sum / n);
	printf("不及格人數 : %d",fail); 
	return 0;
}
