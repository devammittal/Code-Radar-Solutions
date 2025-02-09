#include <stdio.h>
int main() {
    int num1,num2;
    char op;
    scanf("%d %d %c",&num1,&num2,&op);
    if (op == '+') {
            printf("%d\n", num1 + num2);
        } else if (op == '-') {
            printf("%d\n", num1 - num2);
        } else if (op == '*') {
            printf("%d\n", num1 * num2);
        } else if (op == '/') {
            if (num2 == 0) {
                printf("Error\n");
            } else {
                printf("%d\n", num1 / num2);
            }
        } else {
            printf("Error\n");
        }

    return 0;
}