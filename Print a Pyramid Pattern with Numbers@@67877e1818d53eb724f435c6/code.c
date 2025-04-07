#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=n;
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}