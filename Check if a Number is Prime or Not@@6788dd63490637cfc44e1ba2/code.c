#include <stdio.h>
int main() {
    int num,i=2;
    scanf("%d",&num);
    for(int i=2; i*i<=num; i++){
        if(num<2 && num%i==0){
        printf("Not Prime");
        }
        else if(num>1 && num%num==0 && num%1==0){
            printf("Prime");
        }
    }
    return 0;
}