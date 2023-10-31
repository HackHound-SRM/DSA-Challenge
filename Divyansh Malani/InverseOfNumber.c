#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int inverse = 0;

    while (num > 0) {
        inverse = inverse * 10 + num % 10;
        num /= 10;
    }

    printf("%d\n", inverse);

    return 0;
}
