#include<stdio.h>

int main(){
	char name[] = "Willy";
	int len = sizeof(name)/sizeof(name[1])-1;
	
	for (int i = 0; i < len ; i++){
		printf("%c",name[i]);
	}
	
	return 0;
}
