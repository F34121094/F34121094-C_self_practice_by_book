#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[] = "This is a good book for C";
	char str2[] = "Introduction to C";
	
	puts("©I¥s strcpy «e");
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n\n",str2);
	puts("©I¥s strcpy «á");
	strcpy(str1,str2);
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n\n",str2);
	
	return 0;
}
