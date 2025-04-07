#include "stdio.h"
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=1; i<=10; a=a+n){
        printf("%d x %d = %d",n,i,a);
    }
    return 0;
}
