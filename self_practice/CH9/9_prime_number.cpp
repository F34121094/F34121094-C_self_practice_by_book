#include<stdio.h>
#include<math.h>

int test(int n){
	int max = (int)sqrt(n);
	for (int i = max;i>1;i--){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	printf("�п�J�j�� 1 ����ư����� = ");
	scanf("%d",&n);
	if (test(n)){
		printf("%d �O���",n);
	}else{
		printf("%d ���O���",n);
	}
	
	return 0;
}
