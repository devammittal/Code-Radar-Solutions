#include <stdio.h>
int main() {
    int num,i=2;
    scanf("%d",&num);
    for(int i=2; i*i<=num; i++){
        if(num<2 && num%i==0){
        printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}