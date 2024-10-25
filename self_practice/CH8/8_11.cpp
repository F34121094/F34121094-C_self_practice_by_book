#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[] = "Borland C++ Introduction";
	char str2[] = "Visual C++ Introduction";
	
	int i;
	i = strcmp(str1,str2);
	
	if (i==0){
		printf("¦r¦ê¬Û¦P\n");
	}else if(i>0){
		puts("¦r¦ê¤£¦P");
		printf("¦r¦ê 1 ¦r¤¸­È > ¦r¦ê 2 ");
	}else{
		puts("¦r¦ê¤£¦P");
		printf("¦r¦ê 2 ¦r¤¸­È > ¦r¦ê 1");
	}
	
	return 0;
}
