#include<stdio.h>

int main(){
	char *str[] = {"China","Japan","France"};
	
	for(int i = 0; i< 3; i++){
		printf("%X = %s\n",str[i],str[i]);
	}
	str[1] = "Germany";
	for(int i = 0; i< 3; i++){
		printf("%X = %s\n",str[i],str[i]);
	}
	return 0;
}
