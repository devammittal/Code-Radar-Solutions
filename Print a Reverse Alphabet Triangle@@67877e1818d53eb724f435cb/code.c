#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=65;
        for(int j=n; j>=i; j--){
            char ch = (char)a;
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}