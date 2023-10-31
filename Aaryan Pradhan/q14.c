#include <stdio.h>

unsigned long long fact(int n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = fact(n);
        printf("%d! = %llu\n", n, result);
    }

    return 0;
}
