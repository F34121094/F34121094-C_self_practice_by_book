#include<stdio.h>
int max(int *ptr,int l){
	int max = 0;
	for(int i = 0;i<l;i++){
		if (*(ptr+i) > max){
			max = *(ptr+i);
		}
	}
	
	return max;
}

int main(){
	int n[] = {5,8,4,10,2};
	int len = sizeof(n)/sizeof(n[1]);
	printf("max = %d",max(n,len));
	
	return 0;
}
