#include<stdio.h>
#include<string.h>

int main(){
	char name[] = "Willy and apple";
	printf("原始字串 : %s\n",name);
	printf("反轉字串 : %s",strrev(name));
	
	return 0 ; 
}
