#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	char str1[] = "Introduction to C";
	char str2[] = "Ming Chi Institute of Technology";
	int i;
	
	i = strlen(str1);
	printf("字串 1 的長度為 %d\n",i);
	i = strlen(str2);
	printf("字串 2 的長度為 %d\n",i);		//空格也算一個長度 
}
