#include<stdio.h>
int fac(int n){
	if(n==1){
		return 1;
	}else{
		return n * fac(n-1);
	}
}
int main(){
	int a = 3;
	printf("%d! = %d",a,fac(a));
	
	int x = 10;
	printf("\n\n%d! = %d",x,fac(x));
	
	return 0;
}
