#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Cannot calculate the square root of a negative number.\n");
    } else {
        double result = sqrt(N);
        printf("The square root of %d is %lf\n", N, result);
    }

    return 0;
}