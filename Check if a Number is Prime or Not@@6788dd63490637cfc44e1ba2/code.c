#include <stdio.h>
int main() {
    int num,i=2;
    scanf("%d",&num);
    if(num >1 && i*i<=num){
        i++;
        printf("Prime");
    }
    else if(num<2 || num%i==0){
        printf("Not Prime");
    }
    return 0;
}