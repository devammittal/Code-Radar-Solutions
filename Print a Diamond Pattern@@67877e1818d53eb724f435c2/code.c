#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    int ml=n;
    int D=n-1;
    for(int i=1; i<=n+D; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}