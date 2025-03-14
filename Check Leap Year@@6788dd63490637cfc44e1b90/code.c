#include "stdio.h"
int main(){
    int leap_year;
    scanf("%d",&leap_year);
    if(leap_year%4==0 && leap_year%100!=0 || leap_year%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}