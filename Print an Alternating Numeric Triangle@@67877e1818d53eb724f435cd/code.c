#include "stdio.h"
int main(){
    int n;
    scanf("%d",&n);
    int m=n;
    int a=1;
    int b=0;
    for(int i=1; i<=n; i++){
    if(i%2!=0){
        for(int j=1; j<=i; j++){
            if(j%2!=0){
                printf("%d ",a);
            }
            else{
                printf("%d ",b);
            }
        }
    }
    else{
        for(int k=1; k<=i; k++){
            if(k%2==0){
                printf("%d ",a);
            }
            else{
                printf("%d ",b);
            }
        }
    }
        
        printf("\n");
    }
    return 0;
}