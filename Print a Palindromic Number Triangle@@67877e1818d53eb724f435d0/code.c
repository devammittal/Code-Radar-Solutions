#include "stdio.h"
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d",k);
        }
        int a=i-1;
        for(int l=1; l<=i-1; l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}