#include "stdio.h"
int main (){
    int n,b=0;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
       b=b+a;
    }
    printf("%d",b);
    return 0;
}