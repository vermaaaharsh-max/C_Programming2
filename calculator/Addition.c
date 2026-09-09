#include <stdio.h>
 int main() {
    int x,y,sum;
    printf("Enter any number :");
    scanf("%d", &x);
    printf("Enter second number :");
    scanf("%d", &y);

    sum = x - y;
    printf("Sum of two numbers is : %d", sum);
        return 0;
 }