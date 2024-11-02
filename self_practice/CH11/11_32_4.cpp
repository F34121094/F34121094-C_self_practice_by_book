#include<stdio.h>
#define LEN 5
int main(){
	char *str[LEN] = {};
	for(int i = 0 ; i < LEN ; i++){
		printf("%X = %s\n",str[i],str[i]);
	}
	
	return 0;
}
