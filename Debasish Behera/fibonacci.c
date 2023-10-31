#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, temp;
        for (int i = 2; i <= n; i++) {
            temp = a;
            a = b;
            b = temp + b;
        }
        return b;
    }
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The %dth Fibonacci number is %d\n", n, result);
    return 0;
}
