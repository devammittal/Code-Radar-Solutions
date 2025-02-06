#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a==a || a==e  || a==i || a==o || a==u || a==A || a==I || a==U || a==E || a==O ){
        printf("Vowel");
    }
    else if(a>='a' || a<='z' || a>='A' || a<='Z'){
        printf("Consonant");
    }
    else if(a>=0 || a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}