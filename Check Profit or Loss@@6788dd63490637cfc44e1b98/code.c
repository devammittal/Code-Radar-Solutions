#include <stdio.h>
int main() {
    int c_price,s_price;
    scanf("%d %d",&c_price,&s_price);
    if(c_price > s_price){
        printf("Loss");
    }
    else if(c_price < s_price){
        printf("Profit");
    }
    else {
        printf("No Profit No Loss");
    }
    return 0;
}