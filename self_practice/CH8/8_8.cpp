#include<stdio.h>

int main(){
	char str[80] = "Ming-Chi Institue of Technology";
	
	printf("¦r¦ê¿é¥X¦p¤U\n");
	puts(str);
	puts(str+4);
	puts(&str[4]);
	
	return 0;
}
