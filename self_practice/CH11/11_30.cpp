#include<stdio.h>

int main(){
	char *ptr = "Willy Liao";
	
	puts(ptr);
	puts(ptr + 4);
	
	printf("%s\n",ptr);
	printf("%s\n",ptr + 4);
	
	printf("²¾°Ê ptr «á\n");
	
	ptr += 5;
	puts(ptr);
	printf("%s\n",ptr);
	
	return 0;
}
