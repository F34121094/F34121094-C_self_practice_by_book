#include<stdio.h>
#define LEN 5
int main(){
	char *str[LEN] = {};
	for(int i = 0 ; i < LEN ; i++){
		printf("%X = %s\n",str[i],str[i]);
	}
	str[0] = "Apple";
	str[1] = "Willy";
	str[2] = "Eric";
	str[3] = "Billy";
	printf("\n宣告str[0] ~ str[3]後的結果\n");
	for(int i = 0 ; i < LEN ; i++){
		printf("str[%d](%X) = %s\n",i,str[i],str[i]);
	}
	return 0;
}
