#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	int ans = rand()%10 +1;
	int re;
	int  time = 0;
	while (1){
		time += 1;
		printf("�п�J���q�Ʀr : ");
		scanf("%d", &re);
		if (re == ans){
			break;
		}else if(re < ans){
			printf("�вq�j�@�I!\n");
		}else{
			printf("�вq�p�@�I!\n");
		}
	}
	printf("��F %d ���q��", time);
	
	return 0;
}
