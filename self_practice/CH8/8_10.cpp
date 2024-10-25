#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str1[80] = "Willy";
	char str2[80] = " likes apple";
	
	printf("¦r¦ê¿é¥X¦p¤U\n");
	printf("str1 = Willy\nstr2 =  likes apple");
	strcat(str1,str2);
	printf("\n-------------------\nAfter strcat(str1,str2)\n");
	printf("%s",str1);
} 
