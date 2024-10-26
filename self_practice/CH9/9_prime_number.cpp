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
	printf("請輸入大於 1 的整數做測試 = ");
	scanf("%d",&n);
	if (test(n)){
		printf("%d 是質數",n);
	}else{
		printf("%d 不是質數",n);
	}
	
	return 0;
}
