#include "stdio.h"
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=n; i<=n*10; i=i+n){
        printf("%d x %d = %d",n,a,i);
        a++;
    }
    return 0;
}
