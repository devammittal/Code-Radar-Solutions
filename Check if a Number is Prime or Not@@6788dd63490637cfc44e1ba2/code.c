#include "stdio.h"
int main (){
    int a,b=0;
    scanf("%d ",&a);
    for(int a=2; i<a; i++){
        if(a%i==0)
        b=1;
    }
    if(b==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}