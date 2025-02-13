#include "stdio.h"
int main (){
    int a,b=1;
    scanf("%d",&a);
    for(;b<11;b++)
    {
        printf("%dx%d=%d \n",a,b,a*b);
    }
    return 0;
}