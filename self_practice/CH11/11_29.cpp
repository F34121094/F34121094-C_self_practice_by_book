#include<stdio.h>

int main(){
	char name[] = "Willy";
	char *ptr = name;
	
	while(*ptr != '\0'){
		printf("%c",*ptr++);
	}
	
	return 0;
}
