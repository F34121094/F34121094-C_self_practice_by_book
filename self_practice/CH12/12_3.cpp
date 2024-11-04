#include<stdio.h>
void s(int *ptr){
	*ptr *= *ptr;
	return; 
}
int main(){
	int x = 10;
	
	printf("x = %d\n",x);
	printf("©I¥s square() «á\n");
	s(&x);
	printf("x = %d",x);
	return 0;
}
