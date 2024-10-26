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
	printf("費氏數列 1-10 如下 : \n");
	for(int i = 1;i<11;i++){
		printf("fib[%d] = %d\n",i,fa(i));
	}
	
	return 0;
}
