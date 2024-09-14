#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    }
     else {
        unsigned long long result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}