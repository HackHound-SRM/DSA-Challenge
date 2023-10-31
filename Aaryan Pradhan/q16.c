#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == k) {
            count++;
        }
        n /= 10;
    }

    printf("%d\n", count);

    return 0;
}