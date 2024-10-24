#include<stdio.h>
#include<math.h>
int main(){
	int x = 1000000;
	double pi = 0.0;
	
	for (int i = 1; i <= x; i++){
		pi += 4*(pow(-1,i+1)/(2*i-1));
		if (i%100000 == 0){
			printf("·í i = %7d ®É pi = %.10f\n",i,pi);
		}
	}
	
	return 0;
}
