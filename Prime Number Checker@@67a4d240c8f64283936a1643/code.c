#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i =1; i<=n; i++){
        if(n%i==0){
            a=1;
            printf("%d",a);
        }
        else{
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}