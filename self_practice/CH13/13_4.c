#include<stdio.h>

int main(){
    struct product{
        char name[15];
        int price;
        char place[15];
    };
    struct product family = {.name = "香蕉" , .price = 70 , .place = "高雄" };
    printf("family 超商品項表品名 %s\n",family.name);
    printf("價格 : %d\n",family.price);
    printf("產地 : %s\n\n",family.place);

    struct product seven = family;
    printf("seven 超商品項表品名 %s\n",seven.name);
    printf("價格 : %d\n",seven.price);
    printf("產地 : %s\n\n",seven.place);
    
    return 0;
}