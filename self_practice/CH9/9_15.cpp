#include<stdio.h>
void comment(int t){
	if (t > 26){
		printf("�{�b�n��");
	}else if (t > 15){
		printf("�{�b�ܵξA");
	}else if (t > 5){
		printf("�{�b���I�N");
	}else{
		printf("�{�b�n�N");
	}
	return;
}

int read(){
	int t;
	printf("�п�J�{�b���ū� : ");
	scanf("%d",&t);
	return t;
}

int main(){
	int t;
	comment(read());
	
	return 0;
}
