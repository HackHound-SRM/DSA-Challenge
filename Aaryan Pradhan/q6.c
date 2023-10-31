#include <stdio.h>

int CalculateInverse(int num) {
    int inverse = 0;
    int position = 1;

    while (num > 0) {
        int digit = num % 10;
        inverse += position * digit;
        num /= 10;
        position *= 10;
    }

    return inverse;
}

int main() {
    int num;

    printf("Enter a number with unique, sequential digits: ");
    scanf("%d", &num);

    int inverse = CalculateInverse(num);

    printf("The inverse of %d is: %d\n", num, inverse);

    return 0;
}
