#include<stdio.h>
#include<string.h>
void bubble(int data[],int l){
	for(int i = l ; i > 0 ; i--){
		for (int j = 0; j < i ; j++){
			int t;
			if (data[j] > data[j+1]){
				t = data[j];
				data[j] = data[j+1];
				data[j+1] = t;
			}
		}
	}
}

int main(){
	int data[] = {22,1,5,34,43,7};
	int l = sizeof(data) / sizeof(data[0]);
	printf("%d\n",l);
	printf("排序前 => ");
	for (int i = 0; i<l;i++){
		printf("%d\t",data[i]);
	}
	bubble(data,l);
	printf("\n排序後 => ");
	for (int i = 0; i<l;i++){
		printf("%d\t",data[i]);
	}
	
	return 0;
}
