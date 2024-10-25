#include<stdio.h>

int main(){
	char str1[] = "DeepMind";
	char str2[20];
	printf("str1 = %s",str1);
	int i = 0;
	while(str1[i] != '\0'){
		str2[i] = str1[i++]; 
	}
	str2[i+1] = '\0';
	printf("\nstr2 = %s",str2);
	
	return 0;
}
