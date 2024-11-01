#include<stdio.h>

int main(){
	int p[][3]={{1,2,3},{4,5,6}};
	printf("p = %X\n",p);		//p跟*p代表的一樣 
	printf("*p = %X\n",*p);
	printf("**p = %X",**p);
	
	return 0;
}
