#include<stdio.h>

int main(){
    struct product{
        char name[15];
        int price;
        char place[15];
    };
    struct product family = {.name = "����" , .price = 70 , .place = "����" };
    printf("family �W�ӫ~����~�W %s\n",family.name);
    printf("���� : %d\n",family.price);
    printf("���a : %s\n\n",family.place);

    struct product seven = family;
    printf("seven �W�ӫ~����~�W %s\n",seven.name);
    printf("���� : %d\n",seven.price);
    printf("���a : %s\n\n",seven.place);
    
    return 0;
}