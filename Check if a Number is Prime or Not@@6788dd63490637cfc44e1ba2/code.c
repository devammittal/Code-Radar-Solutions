#include <stdio.h>
int main() {
    int num,i=2;
    scanf("%d",&num);
    for(int i=2; i*i<=num; i++){
        if(num<2 && num%i==0){
        printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}