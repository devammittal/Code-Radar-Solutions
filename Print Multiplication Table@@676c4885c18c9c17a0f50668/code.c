#include "stdio.h"
int main (){
    int a,b;
    scanf("%d ",&b);
    for(a=1; a<=10; a++){
        printf("%d X %d = %d\n",b*a);
    }
    return 0;
}
