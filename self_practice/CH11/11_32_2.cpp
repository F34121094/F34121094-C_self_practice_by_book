#include<stdio.h>

int main(){
	char *str[][2]={"China","Beijing",
	"Japan","Tokyo",
	"France","Paris"};
	
	for(int i = 0; i<3;i++){
		printf("%s : %s\n",str[i][0],str[i][1]);
	}
	
	return 0;
}
