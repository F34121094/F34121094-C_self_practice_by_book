#include<stdio.h>

int main(){
	int i ;
	i = 356;
	printf("/%d/\n",i);
	printf("/%2d/\n",i);	//���w���Ŷ���Ʀr�ݭn���Ŷ��٤p�ɡA�|�������� 
	printf("/%5d/\n",i);
	printf("/%-5d/\n",i);
	printf("/%+5d/\n",i);
	printf("/%05d/\n",i);	//�b�e���[0�N���ѤU���Ŷ���������J0 
	
	return 0;
} 
