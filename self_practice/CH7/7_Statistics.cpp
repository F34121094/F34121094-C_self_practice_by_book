#include<stdio.h>
#include<math.h>

int main(){
	int data[]={5,6,8,9};
	printf("平均數 = ");
	float sum = 0;
	for (int i = 0;i<4;i++){
		sum += data[i];
	}
	float avg = sum/4.0;
	printf("%.2f\n",avg);	
	float v = 0;
	for (int i = 0;i<4;i++){
		v += (data[i] - avg) * (data[i] - avg);
	}
	v = v/4.0;
	printf("變異數 = %.2f\n",v);
	printf("標準差 = %.2f",sqrt(v));
	
	return 0;
}
