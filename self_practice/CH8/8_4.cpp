#include<stdio.h>

int main(){
	char name[] = "Hung";
	int i = 0;
	
	while(name[i] != '\0'){
		printf("%c",name[i++]);
	} 
	
	return 0;
}
