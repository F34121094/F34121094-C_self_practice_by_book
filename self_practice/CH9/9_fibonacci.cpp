#include<stdio.h>
int fa(int n){
	if(n==1){
		return 1;
	}else if (n==2){
		return 1;
	}else{
		return fa(n-1) + fa(n-2);
	}
}
int main(){
	printf("�O��ƦC 1-10 �p�U : \n");
	for(int i = 1;i<11;i++){
		printf("fib[%d] = %d\n",i,fa(i));
	}
	
	return 0;
}
